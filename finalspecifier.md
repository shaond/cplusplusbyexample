# Final specifier

The `final` specifier prevents a class from being derived from.

In the case of a virtual method, the `final` specifier prevents a method from being overridden in a derived class.

Here’s an example, of a `final` class:

```cpp
class Base final {
  // . . .
}
```

```cpp
class Derived final: public Base {
  // . . .
}
```

In the case of methods:

```cpp
class Vehicle {
public:
    virtual void register();
    virtual ~Vehicle();
}

class TwoWheeler: public Vehicle {
public:
    virtual void register() final;
    virtual ~TwoWheeler();
}

class Honda: public TwoWheeler {
public:
    virtual void register() final; // Causes a compiler error.
    virtual ~Honda();
}
```
