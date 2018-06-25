# Final specifier

The `final` specifier prevents a class from being derived from.

In the case of a virtual method, the `final` specifier prevents a method from being overridden in derived classes.

Here’s an example, of a `final` class:

```
class Base final {
  // . . .
}
```

```
class Derived final: public Base {
  // . . .
}
```

In the case of methods:

```
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
    virtual voie register() final; // Causes a compiler error.
    virtual ~Honda();
}
```