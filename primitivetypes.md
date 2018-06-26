# Primitive Types

C++ has a number of **primitive types**. These include integers, floating point numbers, boolean values and characters. 

In addition to this, there are extensions in the Standard Template Library (STL) for strings, vectors etc.

Here are some examples of basic types:

## Integers
Integers are useful for a number of tasks such as looping (or iterating). They are signed by default, which means that they can have a positive or negative value.

```cpp
#include <iostream>

using namespace std;

int main() {
    int a {0}; // The {0} represents the value that `a` is instantiated as.
    int b = {10}; // This is also valid.
    int c {-1}; // Integers are `signed` by default, which means they can be negative in value too.

    unsigned int d {55}; // Unsigned can never be negative
}
```
Run this code at [cpp.sh](http://cpp.sh/6eud)
