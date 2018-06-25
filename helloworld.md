# Hello World

This is a basic C++ example; it simply prints “Hello World” to our terminal screen.

```
#include <iostream>

using namespace std;

int main() {
  cout << "Hello World!" << endl;
  return 0;
}
```

To compile this example, use the `g++` compiler and run the following command:

```
$ g++ -Wall -std=c++14 hello_world.cpp -o hello_world
$ ./hello_world
Hello World!
```

### Notes

* The [pre-processor directive]() begins with a `#` (i.e. the Hash key)
* The `namespace` keyword, thats described soon too.