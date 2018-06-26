# Global variables

Global variables are variables declared outside of a function.

**NOTE**

Global variables are dangerous and should be avoided where possible.
Also, unlike local variables, global variables are automatically assigned a zero value.

```cpp
#include <iostream>

using namespace std;

int global_var {1000};

int main() {
    cout << global_var << endl;
    return 0;
}
```
💾 run this on [cpp.sh](http://cpp.sh/8lqnb).
