#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Emit a compilable C header from a JSONL of C types/descriptors.

Usage:
  python emit_c_header_from_jsonl.py SWOS2.jsonl SWOS2_roundtrip.h

Notes:
- Expects records with a 'kind' discriminator and payload in 'data', e.g.:
    { "kind": "struct", "name": "PlayerFile", "data": {"fields":[ ... ]} }
    { "kind": "enum",   "name": "Sprites",    "data": {"members":[ ... ]} }
- Back-compat: if fields/members were top-level, we also accept them.
- Handles basic scalar aliases like byte/word/dword and arrays/pointers.
- Emits enums, structs, unions, typedefs/aliases, and macros/consts (best-effort).
"""

import json
import sys
import re
from collections import defaultdict

# ---------- I/O ----------

def load_records(jsonl_path):
    records = []
    with open(jsonl_path, "r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            rec = json.loads(line)

            # Normalize legacy top-level payloads into data.{fields|members|...}
            if rec.get("kind") in ("struct", "union"):
                if "data" not in rec:
                    rec["data"] = {}
                if "fields" in rec and "fields" not in rec["data"]:
                    rec["data"]["fields"] = rec.pop("fields")
            elif rec.get("kind") == "enum":
                if "data" not in rec:
                    rec["data"] = {}
                if "members" in rec and "members" not in rec["data"]:
                    rec["data"]["members"] = rec.pop("members")
            elif rec.get("kind") in ("typedef", "alias"):
                if "data" not in rec:
                    # Accept both shapes:
                    #  - {"kind":"alias","alias":"word","target":"unsigned short"}
                    #  - {"kind":"typedef","underlying":"...", "name":"..."}
                    data = {}
                    for k in ("alias", "target", "underlying", "name"):
                        if k in rec:
                            data[k] = rec[k]
                    rec["data"] = data

            records.append(rec)
    return records

# ---------- Type Normalization ----------

_SCALAR_MAP = {
    # common short-hands from Ghidra exports
    "byte": "unsigned char",
    "sbyte": "signed char",
    "word": "unsigned short",
    "sword": "short",
    "dword": "unsigned int",      # 16-bit Amiga compilers sometimes use 32-bit int; adjust if you prefer uint32_t
    "sdword": "int",
    "qword": "unsigned long long",
    "sqword": "long long",
    "undefined": "unsigned char",  # safest placeholder; keeps it byte-sized
}

_PTR_RE = re.compile(r"^(.*)\*$")      # e.g., "short*"  or "struct Foo*"
_ARR_RE = re.compile(r"^(.*)\[(.+)\]$")  # e.g., "byte[16]" or "short*[32]" or "byte[35][10]"

def normalize_c_type(cty):
    """
    Convert parser c_type shorthands to valid C decl-specs.
    Supports nested arrays like byte[35][10] and pointer suffixes like short*.
    """
    cty = cty.strip()

    # Handle nested arrays (right-associative). We return a declarator pattern later,
    # so here we only normalize the base type token.
    dims = []
    base = cty
    while True:
        m = _ARR_RE.match(base)
        if not m:
            break
        base = m.group(1).strip()
        dims.append(m.group(2).strip())
    # dims captured from outermost to innermost; declarator needs them in original order
    dims = dims  # keep as-is; we apply at emit time

    # Pointer suffix(es): allow chains like 'short**'
    ptrs = 0
    while _PTR_RE.match(base):
        base = _PTR_RE.match(base).group(1).strip()
        ptrs += 1

    # Map scalar shorthand, but leave 'struct Foo' or 'union Bar' intact
    if base in _SCALAR_MAP:
        base_norm = _SCALAR_MAP[base]
    else:
        base_norm = base  # could already be 'struct X', 'union Y', 'short', 'int', etc.

    return base_norm, ptrs, dims

def emit_decl_from_c_type(base_norm, ptrs, dims, name):
    """
    Given normalized base type, pointer count, dims[], and an identifier,
    build a declarator string like: 'unsigned char name[10][4]' or 'short *p' etc.
    """
    # Pointer stars attach to the identifier: e.g. 'short *p'
    ptr_suffix = "*" * ptrs
    ident = f"{ptr_suffix}{name}" if ptrs else name

    # Arrays wrap the identifier from left to right: name[dim1][dim2]...
    for d in dims:
        ident += f"[{d}]"
    return f"{base_norm} {ident}"

# ---------- Emit Helpers ----------

def get_fields(rec):
    data = rec.get("data")
    if isinstance(data, dict) and "fields" in data:
        return data["fields"]
    return []

def get_enum_members(rec):
    data = rec.get("data")
    if isinstance(data, dict) and "members" in data:
        return data["members"]
    return []

def get_typedef_info(rec):
    """
    Supports:
      - alias/target -> `typedef target alias;`
      - underlying/name -> `typedef underlying name;`
    """
    data = rec.get("data") or {}
    alias = data.get("alias")
    target = data.get("target")
    underlying = data.get("underlying")
    tname = data.get("name")

    if alias and target:
        return ("alias-target", alias, target)
    if underlying and tname:
        return ("underlying-name", tname, underlying)
    return None

# ---------- Emitters ----------

def emit_banner(out, src_jsonl):
    out.write("/* Auto-emitted from {}: round-trip header */\n".format(src_jsonl))
    out.write("#pragma once\n")
    out.write("/* Basic C99 includes are intentionally omitted. */\n\n")

def emit_forward_decls(structs, unions, out):
    """Simple forward decls so pointers to later types compile cleanly."""
    if structs:
        out.write("/* ---- Forward decls (struct) ---- */\n")
        for s in structs:
            nm = s.get("name") or ""
            if nm:
                out.write(f"struct {nm};\n")
        out.write("\n")
    if unions:
        out.write("/* ---- Forward decls (union) ---- */\n")
        for u in unions:
            nm = u.get("name") or ""
            if nm:
                out.write(f"union {nm};\n")
        out.write("\n")

def emit_enum(rec, out):
    name = rec.get("name") or ""
    members = get_enum_members(rec)

    tag = f"enum {name}" if name else "enum"
    out.write(f"{tag} {{\n")
    for m in members:
        if isinstance(m, dict):
            mname = m.get("name")
            mval = m.get("value")
            if mname is None:
                continue
            if mval is None:
                out.write(f"    {mname},\n")
            else:
                out.write(f"    {mname} = {mval},\n")
        elif isinstance(m, str):
            out.write(f"    {m},\n")
    out.write("}")
    if name:
        out.write(f" {name};\n\n")
    else:
        out.write(";\n\n")

def emit_struct_union(rec, out):
    kind = rec["kind"]  # "struct" or "union"
    name = rec.get("name") or ""
    fields = get_fields(rec)

    tag = f"{kind} {name}" if name else kind
    out.write(f"{tag} {{\n")
    for fld in fields:
        fname = fld["name"]
        cty   = fld["c_type"]
        bits  = fld.get("bits")  # may be None

        base, ptrs, dims = normalize_c_type(cty)
        decl = emit_decl_from_c_type(base, ptrs, dims, fname)

        if bits:
            out.write(f"    {decl} : {bits};\n")
        else:
            out.write(f"    {decl};\n")
    out.write("}")
    if name:
        out.write(f" {name};\n\n")
    else:
        out.write(";\n\n")

def emit_typedef(rec, out):
    info = get_typedef_info(rec)
    if not info:
        return
    mode, name_or_alias, target_or_under = info

    if mode == "alias-target":
        alias = name_or_alias
        target = target_or_under
        # target may be shorthand; normalize just the base token chain
        base, ptrs, dims = normalize_c_type(target)
        # typedef does not declare an identifier with arrays, but could with pointers/types.
        # Keep it simple: build a typedef to alias the *base* with pointer stars if any.
        # Arrays in typedef target are uncommon here; if present, we just emit as-is text fallback.
        if dims:
            out.write(f"typedef {target} {alias};\n")
        else:
            stars = "*" * ptrs
            out.write(f"typedef {base} {stars}{alias};\n")

    elif mode == "underlying-name":
        tname = name_or_alias
        underlying = target_or_under
        base, ptrs, dims = normalize_c_type(underlying)
        if dims:
            out.write(f"typedef {underlying} {tname};\n")
        else:
            stars = "*" * ptrs
            out.write(f"typedef {base} {stars}{tname};\n")
    out.write("\n")

def emit_macro(rec, out):
    name = rec.get("name")
    data = rec.get("data") or {}
    val = data.get("value")
    if name and val is not None:
        out.write(f"#define {name} {val}\n")

def emit_const(rec, out):
    """
    Best-effort: if we have a c_type, emit a typed const; else use #define.
    """
    name = rec.get("name")
    data = rec.get("data") or {}
    val = data.get("value")
    ctype = data.get("c_type") or data.get("inferred_type")
    if not name or val is None:
        return
    if ctype:
        base, ptrs, dims = normalize_c_type(ctype)
        if ptrs or dims:
            # Uncommon/awkward for const; fallback to #define:
            out.write(f"#define {name} {val}\n")
        else:
            out.write(f"static const {base} {name} = {val};\n")
    else:
        out.write(f"#define {name} {val}\n")

# ---------- Main ----------

def main():
    if len(sys.argv) != 3:
        print("Usage: python emit_c_header_from_jsonl.py <in.jsonl> <out.h>")
        sys.exit(2)

    src_jsonl, out_h = sys.argv[1], sys.argv[2]
    recs = load_records(src_jsonl)

    # Keep input ordering, but also group for sections
    enums   = [r for r in recs if r.get("kind") == "enum"]
    structs = [r for r in recs if r.get("kind") == "struct"]
    unions  = [r for r in recs if r.get("kind") == "union"]
    typedefs= [r for r in recs if r.get("kind") in ("typedef", "alias")]
    macros  = [r for r in recs if r.get("kind") == "macro"]
    consts  = [r for r in recs if r.get("kind") == "const"]

    with open(out_h, "w", encoding="utf-8", newline="\n") as out:
        emit_banner(out, src_jsonl)

        # Simple forward declarations (helps pointers/reference cycles)
        emit_forward_decls(structs, unions, out)

        # Typedefs/aliases first (useful for field types)
        if typedefs:
            out.write("/* ---- Typedefs / Aliases ---- */\n")
            for t in typedefs:
                emit_typedef(t, out)
            out.write("\n")

        # Macros & consts
        if macros or consts:
            out.write("/* ---- Macros / Consts ---- */\n")
            for m in macros:
                emit_macro(m, out)
            for c in consts:
                emit_const(c, out)
            out.write("\n")

        # Enums
        if enums:
            out.write("/* ---- Enums ---- */\n")
            for e in enums:
                emit_enum(e, out)

        # Structs
        if structs:
            out.write("/* ---- Structs ---- */\n")
            for s in structs:
                emit_struct_union(s, out)

        # Unions
        if unions:
            out.write("/* ---- Unions ---- */\n")
            for u in unions:
                emit_struct_union(u, out)

    print(f"OK ✔  wrote header: {out_h}")

if __name__ == "__main__":
    main()
