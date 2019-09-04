# The ELF Binary Format

## ELF File Types
 - ET_NONE: Unknown type
 - ET_REL: Relocatable file like an object file
 - ET_EXEC: Executable file
 - ET_DYN: Shared object file
 - ET_CORE: A core file or a dump of the full process image during the time of a crash or SIGSEV (segment violation) signal

## Sections

 - .text: program code
 - .rodata: contains read-only data like strings
 - .plt: procedure linkage table contains code for dynamic linker to call functions that are imported from shared libraries
 - .data section: not the data segment, contains data like initialized global variables
 - .bss: unitialized global data
 - .got.plt: global offset tbale works with the plt to provide access to shared libraries
 - .dynsym: dynamic symbol section contains symbol infromation from shared libraries
 - .dynstr: contains string table for dynamic symbols
 - .rel.\*: relocation sections contain information about how parts of ELF should be fixed or modified at runtime
 - .hash: contains hash table for symbol lookup
 - .symtab: used for symbol information
 - There are a few other sections


