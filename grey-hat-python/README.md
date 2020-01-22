# Grey Hat Python

## Incomplete:
### Chapter 4
 - There is a program called danger_track.py, which uses pydbg rto locate dangerous function calls and track hits to those functions. When these are called, four parameters from the stack are dereferenced as well as the return address of the caller and a snapshot of the process is made. If there is an access violation, the script will rewind the process to the last dangerous function hit. From there it single steps and dissassembles each instruction until there is an access violation again.


