# Unique Pointers

Smart pointers are a C++11 addition, which allow us to have pointers, which clean up after themselves.

In order to use a unique pointer, use the `std::unique_ptr` class:

```
#include <memory>
#include <iostream>

using namespace std;

class Test {
private:
    int value;
public:
    // Constructors.
    Test() : Test{0};
    Test(int val) : value{val} {
        cout << "Test constructor" << endl;
    }
    
    // Destructors.
    ~Test() {
        cout << "Test destructor" << endl;
    }
    
    // Get method
    int get_value() {
        cout << value << endl;
    }
    
};

int main() {
    Test t = Test();
    
    
}
```