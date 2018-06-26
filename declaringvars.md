# Declaring variables

Declaring variables in C++ is just like you've seen in other languages:

```cpp
#include <iostream>

int main() {
    // Varible declarations are in the format:
    // type name = assignment;
    int variable = 0;

    // In c++11 and above, there's a neater, more efficient syntax.
    // The compiler sees this and assigns the value during creation.
    // A major advantage is that the value is instantiated with the 
    // variable. It's not a _seperate_ assignment after the variable
    // has been created.
    int anothervar {0};

    return 0;
}
```

**NOTE**

When variables are created, but not assigned this is dangerous. In C++ there is no safety mechanism that protects you from accessing a random point in memory when using unintialised variables.
