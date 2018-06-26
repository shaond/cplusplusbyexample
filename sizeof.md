# Using `sizeof` to determine size

You can use the `sizeof` keyword to determine the size of an integer, float
etc on your specific machine.

```cpp
#include <iostream>
#include <climits>
#include <cfloat>

using namespace std;

int main() {
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;
}

```
💾 run this on [cpp.sh](http://cpp.sh/37coh)
