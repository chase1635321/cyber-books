# The Linux Environment and Its Tools

This chapter gives a list of some essential tools.

 - GDB
 - objdump
 - objcopy (copy specific data sections to a file)
 - strace
 - ltrace
 - ftrace (his custom tool to show all function calls) https://github.com/elfmaster/ftrace
 - readelf
 - ERESI: The ELF reverse engineering system interface (http://eresi-project.org, has good content but outdated). Whitepapers at http://phrack.org/archives/issues/61/8.txt and http://phrag.org/archives/issues/63/9.txt
 - Useful devices and files: /proc/<pid>/maps contains the layout of a process image (stack, heap, so and more), /proc/kcore (covered in chapter 9) is the core file system for the linux kernel. This core file can be used by GDB to debug and analyze the kernel. /boot/System.map contains every symbol for the entire kernel. /proc/kallsyms is like System.map except it is maintained b ythe kernel and is dynamically updated. /proc/iomem is like the proc maps but for system memory.
 - ECFS: Extended core file snapshot (core dump tool that is for advanced forensic analysis of the process image, https://github.com/elfmaster/ecfs). Covered in Chapter 8.
 - LD_PRELOAD
 - LD_SHOW_AUXV tells the program loader to display the programs auxiliary vectr during runtime. The auxiliary vector is niformation that is palced on the program stack by the kernel's ELF loading routine, with information that is passed to the dynamic linker. (Covered in Chapter 3)
 - The lk linker program
