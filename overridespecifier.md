# Override specifier

The `override` specifier ensures that the compiler uses the function in the Derived class being use, not it’s Base class.

This behaviour is called dynamic binding.

For example:

```
class Base {
private:
    // Private members
public:
    Base();
    virtual ~Base();
    
    virtual void print_balance() const {
        std::cout << "Inside Base PB" << std::endl; 
    }
}
```

```
class Derived {
private:
    // Private members.
public:
    Derived();
    virtual ~Derived();
    
    virtual void print_balance() const override {
        std::cout << "Inside Derived PB" << std::endl;
    }
}
```

This hints to the compiler that if we ever instantiate a pointer to a `Derived` class, we should use its member function e.g.

```
#include <iostream>

#include "base.h"
#include "derived.h"

using namespace std;

int main() {
    Base *ptr = new Derived();
    ptr->print_balance(); // "Inside Derived PB"
    delete ptr;
}
```

## NOTES

The `override` specifier ensures the compiler calls the `print_balance` function in the `Derived` class, not the statically bound `print_balance` of it’s `Base` class.

If we accidentally forget to match the function specification exactly, then we’ll mess up and the `Base` classes `print_balance` will be called using __Static Binding__.