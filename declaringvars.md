# Declaring variables

Declaring variables in C++ is just like you've seen in other languages:

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Variable declarations are in the format:
    // type name = assignment;
    int variable = 0;

    // In c++11 and above, there's a neater, more efficient syntax.
    // The compiler sees this and assigns the value during creation.
    // A major advantage is that the value is instantiated with the 
    // variable. It's not a _seperate_ assignment after the variable
    // has been created.
    int anothervar {0};

    // Create a vector of integers.
    vector<int> integers {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // The compiler figures out the type of `more_integers` based on the right
    // hand side assignment.
    auto more_integers = integers;

    return 0;
}
```

## Dangers


When variables are created but not assigned, this is dangerous.
In C++ there is no safety mechanism that protects you from accessing a random point in memory when
using unassigned variables (unassigned variables have an __indeterminate value__).

Here's what an unassigned variable looks like:

```cpp
#include <iostream>

using namespace std;

int main() {
    int i;

    cout << i << endl;
}
```
💾 run this on [cpp.sh](http://cpp.sh/4xhya)

This can lead to unintended side effects in your code. Most style guides prevent you from creating an unintialised variable for this reason.
