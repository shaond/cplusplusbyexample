# Classes and Structs

Classes are used to hold encapsulated data which represent the real world.
Structs are implemented in the same way, but are only to be used to pass data around.

The basic differences between classes and structs are that by default, class members
are private by default, whereas structs are public by default.

```cpp
struct Student {
    int age;
    std::string fname;
    std::string lname;
};
```

```cpp
class Student {
private:
    int age;
    std::string fname;
    std::string lname;
public:
    int get_age();
    bool set_age();
    std::string get_first_name();
    bool set_first_name(std::string name);
};

```
