# Const member functions

The `const` keywords tells the compiler that no data is going to be changed within the function body.

```
class Base {
private:
    // Private members
    double balance;
public:
    double get_balance() const {
        std::cout << balance << std::endl;
    }
}
```

This tells the compiler that no data is going to be modified inside the `get_balance()` method.

