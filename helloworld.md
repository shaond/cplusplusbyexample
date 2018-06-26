# Hello World

This is a basic C++ example; it simply prints “Hello World” to our terminal screen.

```cpp
#include <iostream> // This is a header, it tells the compiler to include a specific file.

using namespace std; // Namespaces represent a collection of code, or libraries.

// All programs have a main function, and they always return an integer.
// Any non-zero return value tells our shell that the program aborted abnormally.
int main() {
  cout << "Hello World!" << endl;
  return 0;
}
```

To compile this example, use the `g++` compiler and run the following command:

```bash
$ g++ -Wall -std=c++14 hello_world.cpp -o hello_world
$ ./hello_world
Hello World!
```

**NOTE** 

Installing a compiler is pretty straightforward, but varies with each operating system. Consider reading the manual for a compiler of your choosing.

Common compilers include: [GCC](https://gcc.gnu.org/), [CLANG](https://clang.llvm.org/) and [Intel's C++ compiler](https://software.intel.com/en-us/c-compilers).
