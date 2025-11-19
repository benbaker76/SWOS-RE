## SWOS.Slave

Patches directly to the `SWOS2` binary:

- **Zero-division / CACR patches (`PL_W ...,$6002`, CACR writes)** - Replace dangerous `divu.w #0` and privileged CACR accesses with safe branches so the game doesn’t hit illegal instructions on 68020+ / emulators.
- **Team-file size / buffer patches (`PL_PA ... ,data_buffer` + `PL_NOP` on size checks)** - Redirect team-file reads to a large buffer and NOP-out file-size checks so oversized modern team/tactics files load without crashing or truncation.
- **Format-disk / floppy-code removal (`PL_R` “Format Disk name removed”, “floppy shit”, disk requesters)** - Remove original floppy format prompts, low-level disk I/O, and requesters that make no sense from hard disk/WHDLoad.
- **Rob Northen copylock in-place constant patches (the `PL_W` / `PL_L` sequences near `copylock` addresses)** - Overwrite parts of the Rob Northen protection check with fixed constants so the copylock logic always passes without actually doing disk-based protection checks.
- **Fake loader calls (`PL_S` “Fake send to loader…”)** - Shorten or reroute calls that “send” to the original loader so that disk-change state is preserved but the engine doesn’t really bounce back to the old boot/loader code.
- **Graphics / custom‐register tweaks (`PL_ORW $20be,$200`, `PL_L` on `bplcon3/4`, colorbit changes)** - Soften or remove writes to `BPLCONx`/related custom registers to improve compatibility on AGA/fast machines and avoid snoop/cache issues and odd color modes.
- **Disk requester removal (`PL_R` on large offsets like `$3db44`, `$407e0`, etc.)** - Strip out built-in “insert disk” / error requester code so the WHDLoad setup handles errors instead of the original UI.
- **Last-bug / misc gameplay fixes (`PL_W $4144a,$6008`, `PL_R $e7e` etc.)** - Apply small inline fixes noted by the slave author (e.g. “Removes last bug!”) to clean up remaining logic issues in the original binary.
- **Menu / input plumbing adjustments that don’t call back into the slave (plain address/constant writes)** - Tweak a handful of menu and keyboard paths to be consistent with the new loader and memory layout while still staying entirely inside the game’s own code.

Patches that call-back into `SWOS.Slave`:

- **fix_snoop_bug** - Tiny patch that resets the custom chip pointer and writes a safe value to `bplcon0` to avoid a graphics “snoop”/cache-related display bug.
- **fix_memory_routine_9697_1** - Stub replacement for the game’s original 96/97 memory-detection routine so it doesn’t poke all over RAM and instead uses WHDLoad’s controlled memory setup.
- **rob_northen_loader** - Dispatcher that emulates the original Rob Northen disk loader by routing its commands (load/save/delete/list/etc.) through WHDLoad’s file I/O functions.
- **access** - Patch hook used during disk/file “access” that rebases `A1` on the game’s main data pointer and masks it to 24-bit, fixing a bug (notably in Highlights playback).
- **kb_hook** - Keyboard interrupt hook that reads CIAA, decodes the key, and exits cleanly via `resload_Abort` when the configured quit key (e.g. Del) is pressed.