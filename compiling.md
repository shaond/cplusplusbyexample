# Compiling Your Code

Compiling programs can get a bit tricky, but for small programs, you can use the compiler directly. For large projects, you are better off using a Makefile, or other build system.

```bash
g++ -Wall -std=c++14 file1.cpp file2.cpp -o thenameofyourbinary
```


* `-Wall` is the flag that says show be all warnings
* `-std=c++14` instructs the compiler to use the C++14 standard
* You need to include all your source files (if there are many, just use a Makefile) 
* `-o` tells the linker to spit out a binary with the filename `thenameofyourbinary` - if you leave this out, it just creates an executable named `a.out` in the same directory as where you entered this command.


