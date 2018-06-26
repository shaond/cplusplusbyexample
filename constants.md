# Constants

Constants are useful for defining variables which should never change during runtime.

```cpp
#include <iostream>

using namespace std;

int main() {
    const double pi = 3.14;
    
    cout << pi << endl;
    
    pi = 4.08; // Fails with error "assignment of read-only variable"
    
    return 0;
}
```
💾 run on [cpp.sh](http://cpp.sh/3qc7w).
