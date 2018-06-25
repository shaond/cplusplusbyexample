# Constructor Intialisation Lists

Sometimes you want to create a class object with it’s members initialised.

Using an initialisation list when creating an object of a class, is far more efficient, than performing assignment _after_ instantiation. 

Here’s what an initialisation list looks like:

```
Vehicle::Vehicle()
    : name{“Demo Vehicle”}, cc{1000}, cylinders{4} {
}

Vehicle::Vehicle(std::string name)
    : name{name}, cc{1000}, cylinders{4} {
}

Vehicle::Vehicle(std::string name, int cc, int cylinders)
    : name{name}, cc{cc}, cylinders{cylinders} {
}
```

Notice that the only difference are the arguments passed during initialisation?

This can be simplified, by using delegating constructors, as follows:

```
Vehicle::Vehicle()
    : Vehicle {"Demo Vehicle", 1000, 4} {
}

Vehicle::Vehicle(std::string name)
    : Vehicle {name, 1000, 4} {
}

Vehicle::Vehicle(std::string name, int cc, int cylinders)
    : name{name}, cc{cc}, cylinders{cylinders} {
}
```

This saves us from having to repeat a whole bunch of initialisation code.