# WTF are the dot, arrow and double colon used for?

In C++ there are three specific ways to reference the members of a Class.

Take for example a class called `Vehicle`.

```cpp
class Vehicle {
  public:
    string name;
    int cc;
    void get_name();
};
```

Using `Vehicle::name` is the way to access the member `name` of the class `Vehicle`. 
For functions (where it is more commonly used) it would be `Vehicle::get_name()`.

To access a member of an Object you can use `Vehicle.name` and it would return the value of `name`.

To access the member of an Object, for which you have a pointer e.g. `Vehicle *tesla = new Vehicle{}`, you need to use the arrow operator `->`, which looks like this: `tesla->cc`. 

The arrow notation was created as a shortform for `(*tesla).cc`.

