#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
parse_ghidra_header_to_jsonl.py

Parse a (mostly self-contained) C header exported from Ghidra (with macros removed)
using pycparser, and emit a JSONL of types:
- enum (with members)
- struct (with fields)
- union  (with fields)
- typedef (alias -> target)

Design goals:
- Capture enum members even when the enum only appears inside a typedef
  (e.g., `typedef enum { ... } Name;`). We materialize a separate `enum` record too.
- For anonymous composites in typedefs (e.g., `typedef struct { ... } Foo;`),
  we emit a `struct` (or `union`) record named `Foo` and also the typedef record.
- No external preprocessor is required; we strip preprocessor lines and
  common extern "C" guards.
"""

import argparse
import io
import json
import os
import re
import sys

from pycparser import c_ast, c_parser, c_generator

# ----------------------------- Sanitizer --------------------------------------

_EXTERN_C_OPEN_RE  = re.compile(r'^\s*extern\s+"C"\s*\{\s*$')
_EXTERN_C_CLOSE_RE = re.compile(r'^\s*\}\s*//?\s*extern\s+"C"\s*\}?$')

def sanitize_source(text: str) -> str:
    """
    Make the header friendlier to pycparser:
    - Remove preprocessor lines (#...)
    - Strip extern "C" { ... } wrappers
    - Remove GCC-style __attribute__(...) and __declspec(...) (replace with '')
    - Remove static asserts if any simple forms appear
    """
    # Drop preprocessor lines
    lines = []
    skip_depth = 0
    for ln in text.splitlines():
        s = ln.strip()
        if s.startswith("#"):
            # Drop all # lines (pragmas, includes, ifdef guards)
            continue
        if _EXTERN_C_OPEN_RE.match(s):
            skip_depth += 1
            continue
        if skip_depth and s.startswith("}"):
            skip_depth = max(skip_depth - 1, 0)
            continue
        lines.append(ln)
    s = "\n".join(lines)

    # Remove __attribute__((...)) and __declspec(...)
    s = re.sub(r"__attribute__\s*\(\([^)]*\)\)", "", s)
    s = re.sub(r"__declspec\s*\([^)]*\)", "", s)

    # Replace unknown storage-class keywords (Ghidra sometimes dumps) with spaces
    s = re.sub(r"\b__restrict\b", " ", s)
    s = re.sub(r"\brestrict\b", " ", s)

    # Very simple _Static_assert remover (no-comma single-line)
    s = re.sub(r"_Static_assert\s*\([^;]*\);\s*", " ", s)

    return s

# ----------------------------- Type Stringify ---------------------------------

_gen = c_generator.CGenerator()

def node_to_code(n: c_ast.Node) -> str:
    if n is None:
        return ""
    return _gen.visit(n)

def decl_type_to_str(t) -> str:
    """
    Render a Decl/TypeDecl/PtrDecl/ArrayDecl/Struct/Union/Enum as C type text.
    """
    if isinstance(t, c_ast.TypeDecl):
        base = t.type
        if isinstance(base, c_ast.IdentifierType):
            return " ".join(base.names)
        if isinstance(base, (c_ast.Struct, c_ast.Union, c_ast.Enum)):
            # `struct Tag`, `union Tag`, `enum Tag`
            kind = base.__class__.__name__.lower()  # 'struct'/'union'/'enum'
            tag  = base.name or ""
            return f"{kind} {tag}".strip()
        # Fallback to codegen
        return node_to_code(t)
    elif isinstance(t, c_ast.PtrDecl):
        # Recurse then add * (keep spacing)
        inner = decl_type_to_str(t.type)
        if inner.endswith("]"):  # pointer to array -> parenthesis
            return f"({inner})*"
        return inner + " *"
    elif isinstance(t, c_ast.ArrayDecl):
        inner = decl_type_to_str(t.type)
        dim = node_to_code(t.dim) if t.dim is not None else ""
        return f"{inner}[{dim}]"
    elif isinstance(t, (c_ast.Struct, c_ast.Union, c_ast.Enum)):
        kind = t.__class__.__name__.lower()
        tag  = t.name or ""
        return f"{kind} {tag}".strip()
    else:
        return node_to_code(t)

def decl_to_field(decl: c_ast.Decl) -> dict:
    """
    Convert a field Decl into {'name','c_type', 'bits'?}
    """
    name = decl.name or "anon"
    ctype = decl_type_to_str(decl.type)
    item = {"name": name, "c_type": ctype}
    if getattr(decl, "bitsize", None) is not None:
        item["bits"] = node_to_code(decl.bitsize)
    return item

# ----------------------------- Collectors ------------------------------------

class TypeCollector(c_ast.NodeVisitor):
    def __init__(self):
        # Indexed by name
        self.enums = {}     # name(or "") -> {'members':[{'name','value'?}]}
        self.structs = {}   # name(or "") -> {'fields':[...]} (may be anon until typedef gives alias)
        self.unions = {}    # name(or "") -> {'fields':[...]}
        self.typedefs = {}  # alias -> target (string)

    # ---- Core node handlers

    def visit_Typedef(self, node: c_ast.Typedef):
        alias = node.name or ""
        t = node.type
        # Typedef always wraps a TypeDecl for named aliases
        if isinstance(t, c_ast.TypeDecl):
            # enum/struct/union possibly embedded
            base = t.type
            if isinstance(base, c_ast.Enum):
                # Capture enum (with potential anonymous tag) and also typedef
                ename = base.name or ""
                members = []
                if base.values and base.values.enumerators:
                    for ev in base.values.enumerators:
                        mname = ev.name
                        mval  = node_to_code(ev.value) if ev.value is not None else None
                        members.append({"name": mname, "value": mval})
                # Store enum under its tag name (can be "")
                if ename not in self.enums or not self.enums.get(ename, {}).get("members"):
                    self.enums[ename] = {"members": members}
                # typedef to enum
                self.typedefs[alias] = f"enum {ename}".strip()
                return

            if isinstance(base, (c_ast.Struct, c_ast.Union)):
                kind = "struct" if isinstance(base, c_ast.Struct) else "union"
                tag  = base.name or ""
                # Extract fields (if present)
                fields = []
                if base.decls:
                    for d in base.decls:
                        if isinstance(d, c_ast.Decl):
                            fields.append(decl_to_field(d))
                # If anonymous (no tag), bind the composite definition to typedef alias
                comp_name = tag if tag else alias
                target_str = f"{kind} {tag}".strip() if tag else kind
                if kind == "struct":
                    # prefer existing by name, otherwise set
                    if comp_name not in self.structs or not self.structs.get(comp_name, {}).get("fields"):
                        self.structs[comp_name] = {"fields": fields}
                else:
                    if comp_name not in self.unions or not self.unions.get(comp_name, {}).get("fields"):
                        self.unions[comp_name] = {"fields": fields}
                # typedef alias
                self.typedefs[alias] = target_str
                return

            # Plain typedef (IdentifierType, pointers, arrays, etc.)
            target = decl_type_to_str(t)
            self.typedefs[alias] = target
            return

        # Fallback: try to stringify
        self.typedefs[alias] = node_to_code(t)

    def visit_Decl(self, node: c_ast.Decl):
        # Standalone named enums/structs/unions (non-typedef) like `enum E { ... };`
        t = node.type
        if isinstance(t, c_ast.Enum):
            ename = t.name or ""
            members = []
            if t.values and t.values.enumerators:
                for ev in t.values.enumerators:
                    mname = ev.name
                    mval  = node_to_code(ev.value) if ev.value is not None else None
                    members.append({"name": mname, "value": mval})
            if ename not in self.enums or not self.enums.get(ename, {}).get("members"):
                self.enums[ename] = {"members": members}
            return

        if isinstance(t, (c_ast.Struct, c_ast.Union)):
            kind = "struct" if isinstance(t, c_ast.Struct) else "union"
            tag  = t.name or ""
            fields = []
            if t.decls:
                for d in t.decls:
                    if isinstance(d, c_ast.Decl):
                        fields.append(decl_to_field(d))
            if kind == "struct":
                if tag not in self.structs or not self.structs.get(tag, {}).get("fields"):
                    self.structs[tag] = {"fields": fields}
            else:
                if tag not in self.unions or not self.unions.get(tag, {}).get("fields"):
                    self.unions[tag] = {"fields": fields}
            return

    # Visit children by default
    def generic_visit(self, node):
        for c in node:
            self.visit(c)

# ----------------------------- Emission ---------------------------------------

def write_jsonl(records, out_path):
    with open(out_path, "w", encoding="utf-8", newline="\n") as f:
        for rec in records:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")

def to_records(collector: TypeCollector):
    out = []

    # Deterministic ordering
    def sorter(dct):
        return [k for k in sorted(dct.keys(), key=lambda s: (s is None, str(s)))]

    # Enums (skip if no members)
    for name in sorter(collector.enums):
        data = collector.enums[name]
        members = data.get("members") or []
        if not members:
            continue
        out.append({
            "kind": "enum",
            "name": name or "",
            "data": {
                "members": members
            }
        })

    # Structs
    for name in sorter(collector.structs):
        fields = collector.structs[name].get("fields") or []
        out.append({
            "kind": "struct",
            "name": name or "",
            "data": {
                "fields": fields
            }
        })

    # Unions
    for name in sorter(collector.unions):
        fields = collector.unions[name].get("fields") or []
        out.append({
            "kind": "union",
            "name": name or "",
            "data": {
                "fields": fields
            }
        })

    # Typedefs
    for alias in sorted(collector.typedefs.keys()):
        target = collector.typedefs[alias]
        out.append({
            "kind": "typedef",
            "name": "",
            "data": {
                "alias": alias,
                "target": target
            }
        })

    return out

# ----------------------------- Main -------------------------------------------

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("header", help="Input C header (macros removed)")
    ap.add_argument("out_jsonl", help="Output JSONL path")
    args = ap.parse_args()

    with open(args.header, "r", encoding="utf-8") as fh:
        src = fh.read()
    src = sanitize_source(src)

    parser = c_parser.CParser()
    try:
        ast = parser.parse(src, filename="<input>")
    except Exception as e:
        sys.stderr.write(f"[FATAL] pycparser parse error: {e}\n")
        sys.exit(1)

    coll = TypeCollector()
    coll.visit(ast)

    recs = to_records(coll)
    write_jsonl(recs, args.out_jsonl)
    print(f"OK ✔  {len(recs)} rows written to {args.out_jsonl}")

if __name__ == "__main__":
    main()
