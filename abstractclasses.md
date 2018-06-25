# Abstract classes & Pure virtual functions

An abstract class which cannot be instantiated (usually the base class).

e.g. A `Shape` or `Vehicle` class wont be instantiated for example, no one would ever create a new `Shape` object, because we’d only ever want a `Circle` or `Line` or `Square`. 

Similarly, for a `Vehicle` we’d only ever instantiate a `Motorbike` or `Truck` sub-class.

To define an abstract class, we only have virtual functions:

```
class Shape {
private:
    // Private member variables & functions.
public:
    virtual void draw() = 0; // Pure virtual function.
    virtual void rotate() = 0; // Pure virtual function.
    virtual ~Shape(); // Virtual destructor.
    …
}
```

Notice the `virtual void draw() = 0` how it ends with a `= 0` - this is what defines a virtual function.

Now, if we have a Derived class which overrides the virtual functions, it becomes a concrete class (which can be instantiated) e.g:

```
class Circle: public Shape {
private:
    // Private members.
public:
    virtual void draw() override {
        // Do stuff to draw this circle.
    }
    
    virtual void rotate() override {
        // Do stuff to rotate this shape.
    }
}
```

Now we can create a `Circle` as below:

```
// Headers and class definition.

int main() {
    Shape shape;
    Shape *shape_ptr = new Circle();
    
    shape_ptr->draw();
    shape_ptr->rotate();
}
```

## NOTES

Use an Abstract base class, when you need to force Derived classes to implement certain functionality as above, all Derived classes need to implement the `draw()` and `rotate()` methods to be instantiated.