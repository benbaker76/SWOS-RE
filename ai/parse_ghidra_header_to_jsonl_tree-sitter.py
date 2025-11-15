#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Parse a Ghidra-exported C header (types/constants) into JSONL (Tree-sitter only).

Usage:
  python parse_ghidra_header_to_jsonl.py SWOS2.h SWOS2.jsonl --unit SWOS2.h --tag amiga --tag swos
"""

from __future__ import annotations
import argparse, hashlib, json, re, sys
from pathlib import Path
from typing import Any, Dict, List, Optional, Tuple

# -------- require tree-sitter (single backend) --------
try:
    from tree_sitter_languages import get_parser as ts_get_parser
except Exception as e:
    print("[FATAL] tree_sitter_languages is required. Try:", file=sys.stderr)
    print("  pip install 'tree_sitter==0.20.4' 'tree_sitter_languages==1.10.2'", file=sys.stderr)
    print(f"Details: {e!r}", file=sys.stderr)
    sys.exit(2)

# ===================== utilities =====================
def read_source(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="ignore")

def slugify(kind: str, name: Optional[str], c_decl: str) -> str:
    if name and name.strip():
        return f"{kind}.{name.strip()}"
    h = hashlib.sha1(c_decl.encode("utf-8")).hexdigest()[:10]
    return f"{kind}.anon_{h}"

def span_from_offsets(src: str, start_byte: int, end_byte: int) -> Tuple[int, int]:
    start_line = src.count("\n", 0, start_byte) + 1
    end_line = src.count("\n", 0, end_byte) + 1
    return start_line, end_line

def dump(obj: Dict[str, Any]) -> str:
    return json.dumps(obj, ensure_ascii=False)

def default_header_meta(unit: Optional[str], path: Path) -> Tuple[str, str]:
    if unit is None:
        unit = path.name
    return unit, str(path)

# ===================== macros =====================
_DEFINE_RE = re.compile(r"^\s*#\s*define\s+([A-Za-z_]\w*)\s+(.*)$")
def preprocess_backslash_newlines(text: str) -> str:
    out, buf = [], ""
    for line in text.splitlines():
        if buf:
            buf += line
        else:
            buf = line
        if buf.endswith("\\"):
            buf = buf[:-1]
            continue
        out.append(buf); buf = ""
    if buf: out.append(buf)
    return "\n".join(out)

def detect_value_kind(val: str) -> str:
    s = re.split(r"(//|/\*)", val.strip())[0].strip()
    if not s: return "expr"
    if s.startswith(("\"", "'")): return "string"
    if re.fullmatch(r"0[xX][0-9a-fA-F]+[uUlL]*", s): return "hex"
    if re.fullmatch(r"[+-]?\d+[uUlL]*", s): return "int"
    return "expr"

def parse_macros(src: str, unit: str, path_str: str, tags: List[str]) -> List[Dict[str, Any]]:
    src2 = preprocess_backslash_newlines(src)
    rows: List[Dict[str, Any]] = []
    for m in _DEFINE_RE.finditer(src2):
        name = m.group(1)
        value = m.group(2).strip()
        c_decl = f"#define {name} {value}"
        start = src.find(c_decl)
        end = start + len(c_decl) if start >= 0 else 0
        s_line, e_line = (1, 1) if start < 0 else span_from_offsets(src, start, end)
        rows.append({
            "version": "1.0",
            "kind": "macro_constant",
            "name": name,
            "slug": slugify("macro", name, c_decl),
            "source": {"unit": unit, "path": path_str, "span": {"start_line": s_line, "end_line": e_line}},
            "doc": "",
            "c_decl": c_decl,
            "data": {"value": value, "value_kind": detect_value_kind(value), "inferred_type": None},
            "tags": tags,
        })
    return rows

# ===================== tree-sitter helpers =====================
def ts_text(src: str, node) -> str:
    return src[node.start_byte:node.end_byte]

def ts_walk(node):
    st, out = [node], []
    while st:
        n = st.pop()
        out.append(n)
        for i in range(n.child_count - 1, -1, -1):
            st.append(n.child(i))
    return out

def ts_get_ident_text(src: str, node) -> Optional[str]:
    for ch in node.children:
        if ch.type in ("identifier", "type_identifier"):
            return src[ch.start_byte:ch.end_byte]
    return None

def ts_extract_declarator_name_and_dims(src: str, node) -> Tuple[Optional[str], List[int]]:
    name, dims = None, []
    st = [node]
    while st:
        cur = st.pop()
        if cur.type == "identifier":
            name = src[cur.start_byte:cur.end_byte]
        if cur.type == "array_declarator":
            size = None
            for ch in cur.children:
                if ch.type == "number_literal":
                    txt = src[ch.start_byte:ch.end_byte]
                    try:
                        size = int(txt, 16) if txt.lower().startswith("0x") else int(txt, 10)
                    except: size = None
            dims.append(size if size is not None else -1)
        for i in range(cur.child_count):
            st.append(cur.child(i))
    return name, dims

def ts_count_pointer_depth(node) -> int:
    depth, st = 0, [node]
    while st:
        cur = st.pop()
        if cur.type == "pointer_declarator":
            depth += 1
        for i in range(cur.child_count):
            st.append(cur.child(i))
    return depth

def ts_compose_field_ctype(src: str, field_decl) -> Tuple[str, List[Dict[str, Any]]]:
    base_parts, declarators = [], []
    for ch in field_decl.children:
        if ch.type in ("type_identifier","primitive_type","struct_specifier","union_specifier",
                       "enum_specifier","const","volatile","signed","unsigned","long","short"):
            base_parts.append(src[ch.start_byte:ch.end_byte])
        elif ch.type in ("field_declarator","pointer_declarator","array_declarator",
                         "parenthesized_declarator","identifier"):
            declarators.append(ch)
    base = " ".join(" ".join(base_parts).split())
    fields: List[Dict[str, Any]] = []
    for decl in declarators:
        name, dims = ts_extract_declarator_name_and_dims(src, decl)
        if not name: continue
        ptrs = ts_count_pointer_depth(decl)
        ctype = base + (" " + "*" * ptrs if ptrs else "")
        fields.append({"name": name, "c_type": ctype.strip(), "array_dims": dims,
                       "bit_width": None, "offset_bytes": None})
    return base, fields

def harvest_types_treesitter(src: str, unit: str, path_str: str, tags: List[str]) -> List[Dict[str, Any]]:
    # Build parser (single call; fails fast if versions mismatch)
    parser = ts_get_parser("c")
    tree = parser.parse(src.encode("utf-8"))
    root = tree.root_node
    rows: List[Dict[str, Any]] = []

    def span(node):
        return span_from_offsets(src, node.start_byte, node.end_byte)

    def emit_spec(spec, typedef_alias: Optional[str]):
        c_decl = ts_text(src, spec).strip()
        s, e = span(spec)
        if spec.type == "enum_specifier":
            members: List[Dict[str, Any]] = []
            enum_list = next((c for c in spec.children if c.type == "enumerator_list"), None)
            cur_val: Optional[int] = -1
            if enum_list:
                for i in range(enum_list.child_count):
                    en = enum_list.child(i)
                    if en.type != "enumerator": continue
                    ident = None; explicit = None
                    for ch in en.children:
                        if ch.type == "identifier":
                            ident = ts_text(src, ch)
                        elif ch.type in ("number_literal","string_literal","char_literal",
                                         "unary_expression","binary_expression","parenthesized_expression",
                                         "call_expression","conditional_expression","assignment_expression",
                                         "update_expression","pointer_expression","field_expression"):
                            explicit = ts_text(src, ch)
                    if explicit is not None:
                        try:
                            vtxt = explicit.strip()
                            v = int(vtxt, 16) if vtxt.lower().startswith("0x") else int(vtxt, 10)
                        except Exception:
                            v = explicit
                        cur_val = v if isinstance(v, int) else (cur_val + 1 if isinstance(cur_val, int) else None)
                        members.append({"name": ident, "value": v})
                    else:
                        cur_val = (cur_val + 1) if isinstance(cur_val, int) else 0
                        members.append({"name": ident, "value": cur_val})
            name = typedef_alias or ts_get_ident_text(src, spec)
            rows.append({
                "version":"1.0","kind":"enum","name":name,
                "slug": slugify("enum", name, c_decl),
                "source":{"unit":unit,"path":path_str,"span":{"start_line":s,"end_line":e}},
                "doc":"","c_decl":c_decl,"data":{"underlying":"int","members":members},"tags":tags,
            })
        else:
            fdl = next((c for c in spec.children if c.type == "field_declaration_list"), None)
            fields: List[Dict[str, Any]] = []
            if fdl:
                for i in range(fdl.child_count):
                    fd = fdl.child(i)
                    if fd.type != "field_declaration": continue
                    _, flds = ts_compose_field_ctype(src, fd)
                    fields.extend(flds)
            name = typedef_alias or ts_get_ident_text(src, spec)
            kind = "struct" if spec.type == "struct_specifier" else "union"
            rows.append({
                "version":"1.0","kind":kind,"name":name,
                "slug": slugify(kind, name, c_decl),
                "source":{"unit":unit,"path":path_str,"span":{"start_line":s,"end_line":e}},
                "doc":"","c_decl":c_decl,"data":{"fields":fields},"tags":tags,
            })

    used_specs = set()
    # typedefs first (captures inline specs)
    typedef_nodes = [n for n in ts_walk(root) if n.type == "type_definition"]
    for td in typedef_nodes:
        td_text = ts_text(src, td).strip()
        s, e = span(td)
        idents = [ts_text(src, n) for n in ts_walk(td) if n.type in ("identifier","type_identifier")]
        alias = idents[-1] if idents else None
        spec = next((n for n in ts_walk(td) if n.type in ("struct_specifier","union_specifier","enum_specifier")), None)
        if alias:
            target = re.sub(r"^\s*typedef\s+", "", td_text, flags=re.S)
            target = re.sub(r"\s+" + re.escape(alias) + r"\s*;\s*$", ";", target, flags=re.S)
            target = target.strip().rstrip(";").strip()
            rows.append({
                "version":"1.0","kind":"typedef","name":alias,
                "slug": slugify("typedef", alias, td_text),
                "source":{"unit":unit,"path":path_str,"span":{"start_line":s,"end_line":e}},
                "doc":"","c_decl":td_text,"data":{"alias":alias,"target":target},"tags":tags,
            })
        if spec is not None:
            emit_spec(spec, typedef_alias=alias)
            used_specs.add(spec)

    # standalone specs
    for n in ts_walk(root):
        if n in used_specs: continue
        if n.type in ("struct_specifier","union_specifier","enum_specifier"):
            emit_spec(n, typedef_alias=None)

    return rows

# ===================== main =====================
def main():
    ap = argparse.ArgumentParser(description="Parse Ghidra header -> JSONL (Tree-sitter only).")
    ap.add_argument("header", type=Path)
    ap.add_argument("out", type=Path)
    ap.add_argument("--unit", type=str, default=None)
    ap.add_argument("--tag", action="append", default=[])
    args = ap.parse_args()

    src_path, out_path = args.header, args.out
    src = read_source(src_path)
    unit, path_str = default_header_meta(args.unit, src_path)
    tags: List[str] = list(dict.fromkeys(args.tag or ["amiga", "types"]))

    rows: List[Dict[str, Any]] = []
    rows.extend(parse_macros(src, unit, path_str, tags))

    try:
        rows.extend(harvest_types_treesitter(src, unit, path_str, tags))
    except Exception as e:
        print(f"[FATAL] Tree-sitter failed: {e}", file=sys.stderr)
        print("Check versions. Suggested:", file=sys.stderr)
        print("  pip install 'tree_sitter==0.20.4' 'tree_sitter_languages==1.10.2'", file=sys.stderr)
        sys.exit(2)

    # Dedup by slug
    seen, uniq = set(), []
    for r in rows:
        sl = r.get("slug")
        if sl in seen: continue
        seen.add(sl); uniq.append(r)

    out_path.parent.mkdir(parents=True, exist_ok=True)
    with out_path.open("w", encoding="utf-8", newline="\n") as fh:
        for r in uniq:
            fh.write(dump(r) + "\n")

    print(f"OK ✔  {len(uniq)} rows written to {out_path}")

if __name__ == "__main__":
    main()
