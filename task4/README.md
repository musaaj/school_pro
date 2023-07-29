CpuSimulate simulates 8 bits CPU. It has implemented the following instructions;

+ LDA
+ STA
+ ADD
+ BRA
+ BEQ
+ STOP

#How to compile
The program is developed in ISO C11. It can be compile with any compliant C compiler like Microsoft Visual C++, Clang or GCC. It's portable. It can compile in any OS/machine that supports a compliant C compiler. To compile run the following command 
```
gcc *.c -o CpuSimulate
```
 
#How to run
```
./CpuSimulate
```

The following functions are implemented in the program. 
+ decode_instructions
+ cpu_simulate 

Each function has proper doc string that complies with the popular **betty doc style** and they comply with **betty code style**.

There's room for improvement though. More instructions can be added. proper registers can be incorporated.


