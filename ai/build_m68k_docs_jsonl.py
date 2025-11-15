#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
build_m68k_jsonl.py
Create m68k instruction JSONL from the repo's Markdown docs in ./instructions.

Guarantees:
- One mnemonic per row; id "m68k:<lowercase-mnemonic>"
- category ∈ {arith, logic, shift, move, branch, trap, system}
- addressing_modes has no empty strings; ["(none)"] for no-operand ops
- syntax: array of strings (no ``` fences)
- flags: object with X,N,Z,V,C,text (text without table pipes and without trailing '*')
- condition_codes: object with .affects + per-flag fields + notes
- STOP/BKPT include an immediate form and include "imm" in addressing_modes
- "From MOTOROLA..." footers are stripped from *all* emitted fields (flags, condition codes, plain_text, raw_markdown)
- source_url normalized to GitHub blob URL
- forms / legal_forms structured
- cycles is a string

Usage:
  python3 build_m68k_docs_jsonl.py --out m68k_docs.jsonl
  python3 build_m68k_docs_jsonl.py --src instructions --out m68k_docs.jsonl
"""

import argparse
import json
import os
import re
import sys
from datetime import datetime
from collections import Counter

# ------------------------------
# Category map (authoritative)
# ------------------------------
ALLOWED_CATEGORIES = {"arith","logic","shift","move","branch","trap","system"}

ARITH = {
    "ABCD","ADD","ADDA","ADDI","ADDQ","ADDX",
    "SUB","SUBA","SUBI","SUBQ","SUBX",
    "MULS","MULU","DIVS","DIVU",
    "NEG","NEGX","SBCD","NBCD","EXT",
}
LOGIC = {
    "AND","ANDI","OR","ORI","EOR","EORI","NOT",
    "TST","TAS",
    "BCHG","BCLR","BSET","BTST",
    "CMP","CMPA","CMPI","CMPM",
    "SCC","CLR","SWAP",
    # merged-name docs still land in logic by default (e.g. ASL_ASR, LSL_LSR, ROL_ROR, ROXL_ROXR, etc.)
}
SHIFT = {"ASL","ASR","LSL","LSR","ROL","ROR","ROXL","ROXR"}
MOVE = {"MOVE","MOVEA","MOVEQ","MOVEM","MOVEP","LEA","EXG","PEA"}
BRANCH = {"BCC","BRA","BSR","DBCC","JMP","JSR","RTD","RTE","RTR","RTS"}
TRAP = {"TRAP","TRAPV","CHK","BKPT"}
SYSTEM = {"ILLEGAL","LINK","UNLK","NOP","RESET","STOP","MOVEC","MOVES"}

MNEM2CAT = {}
for m in ARITH:  MNEM2CAT[m] = "arith"
for m in LOGIC:  MNEM2CAT[m] = "logic"
for m in SHIFT:  MNEM2CAT[m] = "shift"
for m in MOVE:   MNEM2CAT[m] = "move"
for m in BRANCH: MNEM2CAT[m] = "branch"
for m in TRAP:   MNEM2CAT[m] = "trap"
for m in SYSTEM: MNEM2CAT[m] = "system"

# no-operand ops => explicit ["(none)"]
NO_OPERAND_MNEMS = {"NOP","RESET","RTE","RTR","RTS","TRAPV"}

# ------------------------------
# Helpers
# ------------------------------
GITHUB_BASE = "https://github.com/prb28/m68k-instructions-documentation/blob/master/"

RE_TITLE = re.compile(r'^\s*#\s*([A-Za-z0-9_]+)\s*-\s*(.+?)\s*$')
RE_SECTION = re.compile(r'^\s*##\s*([A-Za-z][A-Za-z ]+)\s*$', re.IGNORECASE)
RE_CODE_FENCE = re.compile(r'^\s*```.*?$')
RE_INLINE_CODE_FENCE = re.compile(r'```')
RE_TABLE_ROW = re.compile(r'^\s*\|.*\|\s*$')
RE_FROM_MOTOROLA = re.compile(r'from\s+motorola', re.IGNORECASE)

def strip_footers(text: str) -> str:
    """Remove any lines that contain 'From MOTOROLA' (case-insensitive)."""
    if not text:
        return text
    return "\n".join(ln for ln in text.splitlines() if not RE_FROM_MOTOROLA.search(ln)).strip()

def load_markdown(path):
    with open(path, 'r', encoding='utf-8') as f:
        return f.read()

def clean_source_url(source_path):
    p = source_path.replace("\\", "/")
    if p.startswith("instructions/"):
        return GITHUB_BASE + p
    idx = p.find("instructions/")
    if idx >= 0:
        rel = p[idx:]
        return GITHUB_BASE + rel
    leaf = os.path.basename(p)
    return GITHUB_BASE + "instructions/" + leaf

def extract_sections(md_text):
    """
    Parse H1 title and H2 sections (operation, syntax, attributes, description, application, condition codes, notes).
    Returns (title, sections_dict)
    """
    lines = md_text.splitlines()
    title = ""
    sections = {}
    cur = None
    buf = []

    def flush():
        nonlocal cur, buf, sections
        if cur is not None:
            sections[cur] = '\n'.join(buf).strip()
        buf = []

    for line in lines:
        if not title:
            m = RE_TITLE.match(line)
            if m:
                title = f"{m.group(1).upper()} - {m.group(2).strip()}"
                continue

        m2 = RE_SECTION.match(line)
        if m2:
            flush()
            cur = m2.group(1).strip().lower()
        else:
            if cur is not None:
                buf.append(line)

    flush()
    return title, sections

def strip_code_fences(text):
    out = []
    for ln in (text or "").splitlines():
        if RE_CODE_FENCE.match(ln):
            continue
        out.append(ln)
    return '\n'.join(out).strip()

def parse_syntax(syntax_block):
    """
    Returns (syntax_list, legal_forms, forms, addressing_modes)
    - syntax_list: ["MNEM operands", ...]
    - legal_forms: [{"form": "MNEM ...", "src":"...", "dst":"..."}, ...]
    - forms: [{"operands":["<src:...>","<dst:...>"], "sizes":[], "notes":""}, ...]
    - addressing_modes: sorted unique modes like ["imm","Dn","(An)","-(An)"]
    """
    if not syntax_block:
        return [], [], [], []

    inner = strip_code_fences(syntax_block)
    inner = RE_INLINE_CODE_FENCE.sub("", inner)

    lines = [ln.strip() for ln in inner.splitlines() if ln.strip()]
    syntax = []
    legal_forms = []
    forms = []
    modes = set()

    for ln in lines:
        # normalize spaces
        row = re.sub(r'\s+', ' ', ln).strip()
        syntax.append(row)

        parts = row.split(None, 1)
        if len(parts) == 1:
            # bare mnemonic with no explicit operands
            legal_forms.append({"form": row})
            forms.append({"operands": [], "sizes": [], "notes": ""})
            continue

        # split operands (ignore any trailing comments after ';')
        rest = parts[1].split(";", 1)[0].strip()
        if rest.startswith('#') and ',' not in rest:
            ops = [rest]
        else:
            ops = [o.strip() for o in rest.split(",") if o.strip()]

        # collect modes
        for op in ops:
            if op.startswith("#"):
                modes.add("imm")
            elif re.match(r'^[Dd]\d$', op):
                modes.add("Dn")
            elif op.startswith("-(A") or op.startswith("-(a"):
                modes.add("-(An)")
            elif re.match(r'^\(A\d\)$', op, re.IGNORECASE):
                modes.add("(An)")
            # control regs (SR/CCR/USP) are not counted as addressing modes

        # legal form object
        lf = {"form": row}
        if len(ops) >= 1:
            lf["src"] = ops[0]
        if len(ops) >= 2:
            lf["dst"] = ops[1]
        legal_forms.append(lf)

        # tagged operands for forms[]
        op_tags = []
        for i, op in enumerate(ops):
            tag = f"<{'src' if i==0 else 'dst'}:{op}>"
            op_tags.append(tag)
        forms.append({"operands": op_tags, "sizes": [], "notes": ""})

    return syntax, legal_forms, forms, sorted(modes)

def normalize_flags_and_cc(text_from_doc):
    """
    Create flags and condition_codes objects with cleaned text (no tables, no footers).
    """
    flags = {"X": "", "N": "", "Z": "", "V": "", "C": "", "text": ""}
    cc = {"affects": [], "X": "", "N": "", "Z": "", "V": "", "C": "", "notes": ""}

    raw = (text_from_doc or "").strip()
    if raw:
        # drop tables & footers
        lines = []
        for ln in raw.splitlines():
            if RE_TABLE_ROW.match(ln):
                continue
            if RE_FROM_MOTOROLA.search(ln):
                continue
            lines.append(ln.rstrip())
        clean = "\n".join(lines).strip()
        clean = re.sub(r'\*+\s*$', '', clean).strip()
        flags["text"] = clean
        cc["notes"]  = clean

    # affects list: include all five when any CCs are discussed
    cc["affects"] = ["X","N","Z","V","C"]
    return flags, cc

def decide_category(mnem):
    up = mnem.upper()
    # cope with merged-name markdown files (e.g. ASL_ASR, LSL_LSR, ROL_ROR, ROXL_ROXR, DIVS_DIVU, MULS_MULU)
    if up in MNEM2CAT:
        return MNEM2CAT[up]
    # try split on underscore and map the first token
    head = up.split("_", 1)[0]
    return MNEM2CAT.get(head, "logic")

def ensure_no_operand_modes(mnem, addressing_modes):
    if mnem.upper() in NO_OPERAND_MNEMS:
        return ["(none)"]
    # drop accidental empties
    return [m for m in (addressing_modes or []) if m] or []

def ensure_stop_bkpt_immediates(mnem, syntax_list, addressing_modes, legal_forms, forms):
    """
    Ensure STOP/BKPT expose an immediate form and 'imm' is present in addressing_modes.
    Also normalize to include both '#<data>' and '#imm' spellings for robustness.
    """
    up = mnem.upper()
    if up not in {"STOP","BKPT"}:
        return syntax_list, addressing_modes, legal_forms, forms

    want_imm = f"{up} #imm"
    want_data = f"{up} #<data>"

    syn_set = set(syntax_list or [])
    need_imm = want_imm not in syn_set
    need_data = want_data not in syn_set

    # add missing syntax variants (order: #<data> then #imm for consistency)
    out_syn = list(syntax_list or [])
    if need_data:
        out_syn.append(want_data)
        legal_forms.append({"form": want_data, "src": "#<data>"})
        forms.append({"operands": ["<src:#<data>>"], "sizes": [], "notes": ""})
    if need_imm:
        out_syn.append(want_imm)
        legal_forms.append({"form": want_imm, "src": "#imm"})
        forms.append({"operands": ["<src:#imm>"], "sizes": [], "notes": ""})

    if "imm" not in (addressing_modes or []):
        addressing_modes = list(addressing_modes or []) + ["imm"]

    return out_syn, addressing_modes, legal_forms, forms

def summarize_plain_text(title, sections):
    """
    Collapse into plaintext without code fences, tables, or footers.
    """
    pieces = [title]
    order = ["operation","syntax","attributes","description","application","condition codes","notes"]
    for key in order:
        block = sections.get(key, "").strip()
        if not block:
            continue
        blk = strip_code_fences(block)
        blk = "\n".join(ln for ln in blk.splitlines() if not RE_TABLE_ROW.match(ln))
        blk = strip_footers(blk)
        if not blk.strip():
            continue
        pieces.append(key.capitalize())
        pieces.append(blk.strip())
    return "\n".join(pieces).strip()

def make_row_from_markdown(md_path, root_dir):
    md_raw = load_markdown(md_path)
    md_no_footer = strip_footers(md_raw)  # ensure footers are not kept anywhere we emit
    title, sections = extract_sections(md_no_footer)

    if not title:
        base = os.path.splitext(os.path.basename(md_path))[0].upper()
        title = f"{base} - (undocumented)"

    m = re.match(r'^\s*([A-Z0-9_]+)\s*-\s*(.+)$', title)
    if m:
        mnem = m.group(1).upper()
        summary = sections.get("operation", "").strip() or m.group(2).strip()
    else:
        mnem = os.path.splitext(os.path.basename(md_path))[0].upper()
        summary = ""

    syntax_block = sections.get("syntax", "")
    syntax_list, legal_forms, forms, modes = parse_syntax(syntax_block)
    modes = ensure_no_operand_modes(mnem, modes)
    syntax_list, modes, legal_forms, forms = ensure_stop_bkpt_immediates(
        mnem, syntax_list, modes, legal_forms, forms
    )

    flags_doc = sections.get("condition codes", "")
    flags, condition_codes = normalize_flags_and_cc(flags_doc)

    description = sections.get("description", "").strip()
    application = sections.get("application", "").strip()
    notes = sections.get("notes", "").strip()
    if application:
        notes = (notes + ("\n\n" if notes else "") + application).strip()

    source_path = os.path.relpath(md_path, start=root_dir).replace("\\","/")
    source_url = clean_source_url(source_path)

    row = {
        "title": title,
        "summary": summary.strip(),
        "syntax": syntax_list,
        "description": description,
        "addressing_modes": modes,
        "operands": [],  # keep empty; detailed operands live in forms[]
        "cycles": "",
        "flags": flags,
        "examples": [],
        "notes": notes,
        "related": [],
        "source_path": source_path,
        "source_url": source_url,
        "raw_markdown": md_no_footer,  # footer-stripped
        "plain_text": summarize_plain_text(title, sections),
        "license": "Derived from repository; non-verbatim excerpts normalized for search.",
        "type": "instruction",
        "mnemonics": [mnem],
        "id": f"m68k:{mnem.lower()}",
        "isa": "m68000",
        "category": decide_category(mnem),
        "tags": [mnem.lower()],
        "condition_codes": {
            "affects": condition_codes.get("affects", []),
            "X": condition_codes.get("X",""),
            "N": condition_codes.get("N",""),
            "Z": condition_codes.get("Z",""),
            "V": condition_codes.get("V",""),
            "C": condition_codes.get("C",""),
            "notes": condition_codes.get("notes",""),
        },
        "schema_version": 1,
        "legal_forms": legal_forms,
        "forms": forms,
        "generated_at": datetime.utcnow().isoformat(timespec="seconds") + "Z",
        "tool_version": "1.1.4",
    }

    # normalize tags & category
    row["tags"] = [t.lower() for t in (row.get("tags") or [])]
    if row["category"] not in ALLOWED_CATEGORIES:
        row["category"] = "logic"
    return row

def build_rows(src_dir):
    rows = []
    md_root = os.path.abspath(src_dir)
    for name in sorted(os.listdir(md_root)):
        if not name.lower().endswith(".md"):
            continue
        path = os.path.join(md_root, name)
        rows.append(make_row_from_markdown(path, md_root))
    return rows

def validate_brief(rows):
    ids = [r["id"] for r in rows]
    dist = len(set(ids))
    mnems = [r["mnemonics"][0] for r in rows if r.get("type")=="instruction"]
    sample = ", ".join(sorted(mnems)[:20])
    print(f"Wrote {len(rows)} JSONL rows to output (split) from {len(rows)} source files.\n")
    print("=== Validation Report ===")
    print(f"Total JSONL rows: {len(rows)}")
    print(f"Distinct IDs    : {dist}")
    print(f"Split mode      : ON")
    print(f"Mnemonics count : {len(set(mnems))}\n")
    none_rows = [r for r in rows if r.get("type")=="instruction" and r.get("addressing_modes")==["(none)"]]
    print(f"Rows with explicit (none) addressing_modes: {len(none_rows)}\n")
    print(f"Top mnemonics sample: {sample}")

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--src", default="instructions", help="Directory with *.md instruction files")
    ap.add_argument("--out", required=True, help="Output JSONL file")
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        print(f"ERROR: source directory not found: {args.src}", file=sys.stderr)
        sys.exit(2)

    rows = build_rows(args.src)

    # Write ONLY JSON objects; no debug prints to stdout/stdin
    with open(args.out, "w", encoding="utf-8") as w:
        for r in rows:
            if not isinstance(r, dict):
                continue
            w.write(json.dumps(r, ensure_ascii=False) + "\n")

    validate_brief(rows)

    cat_counts = Counter([r.get("category") for r in rows if r.get("type")=="instruction"])
    print("\nCategory distribution:")
    for k,v in sorted(cat_counts.items(), key=lambda kv:(-kv[1], kv[0])):
        print(f"{v:6d} {k}")

if __name__ == "__main__":
    main()
