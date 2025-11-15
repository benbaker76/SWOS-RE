#!/usr/bin/env python3
import sys, json, pathlib
from jsonschema import Draft202012Validator

def load_schema(path):
    with open(path, "r", encoding="utf-8") as f:
        return json.load(f)

def validate_jsonl(jsonl_path, schema_path):
    schema = load_schema(schema_path)
    validator = Draft202012Validator(schema)

    errors = 0
    lines = 0
    with open(jsonl_path, "r", encoding="utf-8") as f:
        for idx, line in enumerate(f, start=1):
            line = line.strip()
            if not line:
                continue
            lines += 1
            try:
                obj = json.loads(line)
            except json.JSONDecodeError as e:
                print(f"[line {idx}] JSON parse error: {e}")
                errors += 1
                continue

            for err in validator.iter_errors(obj):
                # Build a helpful path like "forms[0].operands[1]"
                path = ""
                for p in err.absolute_path:
                    if isinstance(p, int):
                        path += f"[{p}]"
                    else:
                        path += ("" if path == "" else ".") + str(p)
                path = path or "(root)"
                print(f"[line {idx}] {path}: {err.message}")
                if err.context:
                    for sub in err.context:
                        print(f"  ↳ {sub.message}")
                errors += 1

    if errors == 0:
        print(f"OK ✔  {lines} rows validated against schema")
        return 0
    else:
        print(f"FAIL ✖  {errors} schema error(s) across {lines} row(s)")
        return 1

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python validate_jsonl.py <file.jsonl> <schema.json>")
        sys.exit(2)
    sys.exit(validate_jsonl(sys.argv[1], sys.argv[2]))
