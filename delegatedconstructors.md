# Delegated Constructors

Delegating constructors can call other constructors in the same class.

These are useful for collapsing the logic used in constructors.

Take this For example:

```cpp
class Vehicle {
    private:
        std::string name;
        int cc;
        int cylinders;
    public:
        Vehicle();
        Vehicle(std::string name);
        Vehicle(std::string name, int cc, int cylinders);
};
```

The constructors can delegate to one another, in the following fashion:

```cpp
// Constructor with no arguments.
Vehicle::Vehicle()
    : Vehicle {"Default Name", 1000, 4} {
}

// Vehicle constructor, which just takes a name.
Vehicle::Vehicle(std::string name)
    : Vehicle {name, 1000, 4} {
}

// Vehicle constructor where all required params are supplied.
Vehicle::Vehicle(std::string name, int cc, int cylinders)
    : name{name}, cc{cc}, cylinders{cylinders} {
}
```