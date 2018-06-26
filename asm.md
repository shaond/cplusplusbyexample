# Outputting Assemby Code

```bash
g++ -Wall -std=c++14 -S mycode.cpp
```

* The `-S` flag outputs the produced assemby code as a *.s file in the current directory.
* You can export the ASM code with the `-o` and provide a file name `g++ -S hello.cpp -o hello.s`
