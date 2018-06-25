# Interfaces & Abstract Classes

Pure virtual functions can be used to create an interface. Since C++ doesn’t have a specific keyword for interfaces, we hack around it, using virtual functions.

Here’s an example:

```
class Printable {
    friend ostream &operator<<(ostream &, const Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
    virtual ~Printable();
    // Most implementation if needed… (remembering that all methods must be `virtual`
};

ostream &operator<<(ostream &os, const Printable &obj) {
    obj.print(os);
    return os;
}
```

Now, a derived class can implement the “interface” by being derived from the `Printable` class, and implement all the virtual functions:

```
class Vehicle: public Printable {
public:
    virtual void print(ostream &os) override {
        os << "My Vehicle class";
    }
};
```