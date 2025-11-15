#!/usr/bin/env python3
import json, sys
from collections import Counter

def load_recs(p):
    recs = []
    with open(p, "r", encoding="utf-8") as f:
        for i, line in enumerate(f, 1):
            line=line.strip()
            if not line: continue
            obj=json.loads(line)
            obj["_lineno"]=i
            recs.append(obj)
    return recs

def get_fields(rec):
    # supports both shapes
    data = rec.get("data")
    if isinstance(data, dict) and "fields" in data:
        return data["fields"]
    if "fields" in rec:
        return rec["fields"]
    return None

def get_enum_members(rec):
    data = rec.get("data")
    if isinstance(data, dict) and "members" in data:
        return data["members"]
    if "members" in rec:
        return rec["members"]
    return None

def main():
    if len(sys.argv)!=2:
        print("Usage: python inspect_jsonl.py <file.jsonl>")
        sys.exit(2)
    path=sys.argv[1]
    recs=load_recs(path)
    cnt=Counter(r.get("kind","<none>") for r in recs)
    print("Total records:", len(recs))
    for k,v in cnt.items():
        print(f"  kind={k}: {v}")

    # Structs overview
    structs=[r for r in recs if r.get("kind")=="struct"]
    empty_structs=[]
    nonempty_structs=[]
    for r in structs:
        fields=get_fields(r)
        n = len(fields) if isinstance(fields, list) else 0
        if n==0:
            empty_structs.append((r.get("name"), r.get("_lineno")))
        else:
            nonempty_structs.append((r.get("name"), n, r.get("_lineno")))
    print("\nStructs with fields:", len(nonempty_structs))
    for name,n,lineno in nonempty_structs[:5]:
        print(f"  line {lineno}: struct {name} -> {n} field(s)  (shape={'data.fields' if 'data' in recs[lineno-1] else 'fields'})")
    print("Empty structs:", len(empty_structs))
    for name,lineno in empty_structs[:5]:
        print(f"  line {lineno}: struct {name} has 0 fields")

    # Enums overview
    enums=[r for r in recs if r.get("kind")=="enum"]
    enum_with_vals=[]
    enum_empty=[]
    for r in enums:
        mem=get_enum_members(r)
        n=len(mem) if isinstance(mem,list) else 0
        (enum_with_vals if n>0 else enum_empty).append((r.get("name"), n, r.get("_lineno")))
    print("\nEnums with members:", len(enum_with_vals))
    for name,n,lineno in enum_with_vals[:5]:
        print(f"  line {lineno}: enum {name} -> {n} member(s)")
    print("Empty enums:", len(enum_empty))
    for name,n,lineno in enum_empty[:5]:
        print(f"  line {lineno}: enum {name} has 0 members")

    # Show a couple sample struct fields
    print("\nSample struct field dumps:")
    shown=0
    for r in structs:
        fields=get_fields(r)
        if isinstance(fields, list) and fields:
            print(f"  struct {r.get('name')} (line {r.get('_lineno')}):")
            for f in fields[:3]:
                print("    -", f)
            shown+=1
            if shown>=3: break

if __name__=="__main__":
    main()
