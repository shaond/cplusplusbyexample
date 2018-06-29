# Template functions

Template functions are super useful for reducing code bloat.
Basically templates act like blueprints for functions.

Here are some examples:

```cpp
#include <iostream>
#include <string>

using namespace std;

// Our function template called `bigger` takes an arbitrary type `T`
// and compares them to see which one is bigger that the other.
// When the compiler sees this being used, it generates the appropriate
// functions during compile time. Pretty awesome!
template <typename T>
T bigger(T a, T b) {
  // If a is greater than b, return a, else return b.
  return (a > b) ? a : b;
}

// Another random template, which takes two different
// types. Note that each type needs to be explicitly
// specified here.
template <typename T1, typename T2>
void twotypes(T1 a, T2 b) {
  std::cout << a << " " << b << std::endl;
}

// Create a structure called `Vehicle`.
// We'll use this to do comparisons in our main function.
struct Vehicle {
  std::string name;
  int cc;
  int cylinders;
  bool operator>(const Vehicle &rhs) const { return this->cc > rhs.cc; }
};

// Create a class called `Person`.
// We can use the `Person` class to compare in main.
class Person {
 private:
  std::string name;
  int age;

 public:
  // Our constructor forces us to create a `Person`,
  // with a `name` and an `age`.
  Person(std::string name, int age);

  // Standard getters & setters.
  int get_age();
  void set_age();
  std::string get_name();
  void set_name(std::string name);

  // Our overloaded operator `>` allows us to check
  // if one person is older than the other.
  friend Person operator>(const Person &lhs, const Person &rhs);

  // This simply allows us to print the name of the `Person` in a standard way.
  friend std::ostream &operator<<(std::ostream &out, const Person &p);
};

// Constructor.
Person::Person(std::string name, int age) : name{name}, age{age} {}

// Overloaded operator for the comparison of two `Person` objects.
Person operator>(const Person &lhs, const Person &rhs) {
  // If this person's age is greater than the others,
  // return true.
  if (lhs.age > rhs.age) {
    return lhs;
  }
  return rhs;
}

// Overload the output stream operator to print a `Persons` name.
std::ostream &operator<<(std::ostream &out, const Person &p) {
  out << p.name;
  return out;
}

int main() {
  // Create two objects in the stack, tesla and lamborghini.
  Vehicle tesla{"Tesla Roadster", 0, 0};
  Vehicle lamborghini{"Lamborghini 350 GT", 3464, 12};

  // Check which one has more CC/
  // Since `Vehicle` is a custom type, the compiler
  // doesn't know how to compare these.
  // Our overloaded `>` operator helps the compiler
  // figure out how to compare these two objects.
  bool morecc = lamborghini > tesla;

  // Create two people, elon and mark using our
  // custom `Person` class.
  // Because we create these objects are created with the `new` keyword
  // they have dynamic storage duration, and must be deleted.
  Person *elon = new Person{"Elon Musk", 47};
  Person *mark = new Person{"Mark Zuckerberg", 34};

  // This third person `older` is a pointer to a person.
  Person *older = bigger(mark, elon);

  // Deference our person to print out their name.
  std::cout << *older << std::endl;

  // Ensure we get a string representation of a boolean value.
  std::cout << std::boolalpha;
  std::cout << "Does a lamborghini have more CC than a tesla? " << morecc
            << endl;
  std::cout << bigger<int>(4, 2) << std::endl;
  std::cout << bigger<float>(480.01, 2.03) << std::endl;

  // Delete our objects from the heap.
  delete elon;
  delete mark;
}
```
