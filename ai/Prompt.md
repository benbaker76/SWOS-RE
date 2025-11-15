Okay so now I have  and I have verified its schema against .'

- `m68k_docs_schema.json` + `m68k_docs.jsonl`
- `c_types_schema.json` + `LocalTypes.jsonl`
- `Data_schema.json` + `Data.jsonl`
- `m68k_schema.json` + `UpdatePlayers.jsonl`

In another session with you I created a `m68k_docs.jsonl` and `m86_docs_schema.json`. This was a file created from converting a website containing the m68k instruction set in markdown format and converting it into a format useful for a LLM.

So now that we have these two important files I now want to start work on the actual Python that will process an input file (E.g. UpdatePlayers.jsonl) and also load in `m68k_docs.jsonl` for the full instruction set to have as a reference.

I'm not sure if you can use the schema files to tell a LLM what's contained in it or not?

Let's make the script have two options:
1. Gwen-Coder 32B / 30B (I have 24GB VRAM)
2. GPT-5 using the OpenAI API which is currently $1.250 / 1M tokens for input and $10.000 / 1M tokens for output. Let's add a "dry run" parameter to the script so we can calculate an approx token count and cost. Make all these values constants that can be changed at the top of the script.

We can use langchain but it's also okay to just do it all manually. Whatever makes sense for this use-case.

We need to have a prompt that will request that the assembly language and decompiled C in the jsonl file be examined and then using the `m68k_docs.jsonl` as an assembly language reference. Perform the following operations:
- Give unnamed variables such as uVar15 a proper descriptive name
- Give untyped variables such as undefined2 proper types
- Fix any logical issues.
