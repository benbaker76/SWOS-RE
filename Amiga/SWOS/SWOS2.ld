SECTIONS
{
  text 0x00100000 : { *(text) *(TEXT) *(.text) *(.text.*) *(code) *(CODE) *(.rodata) *(.rodata.*) *(const) }
  data 0x00100000 : { *(data) *(DATA) *(.data) *(.data.*) *(.rodata) *(.rodata.*) *(const) }
  bss  0x0015736A (NOLOAD) : { *(bss) *(BSS) *(.bss) *(COMMON) }
}
