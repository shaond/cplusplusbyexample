# Delegated Constructors

Delegating constructors can call other constructors in the same class.

These are useful for collapsing the logic used in constructors.

For example:

```
class Vehicle {
    private:
        std::string name;
        int engine_cc;
        int number_of_cylinders;
    public:
        Vehicle();
        Vehicle(std::string name);
        Vehicle(std::string name, int cc, int cylinders);
};
```