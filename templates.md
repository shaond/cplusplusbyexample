# Template functions

Template functions are super useful for reducing code bloat.
Basically templates act like blueprints for functions.

Here are some examples:

```cpp
#include <iostream>
#include <string>

using namespace std;

template <typename T>
T bigger(T a, T b) {
  // If a is greater than b, return a, else return b.
  return (a > b) ? a : b;
}

template <typename T1, typename T2>
void twotypes(T1 a, T2 b) {
  std::cout << a << " " << b << std::endl;
}

struct Vehicle {
  std::string name;
  int cc;
  int cylinders;
  bool operator>(const Vehicle &rhs) const { return this->cc > rhs.cc; }
};

class Person {
 private:
  std::string name;
  int age;

 public:
  Person(std::string name, int age);
  int get_age();
  void set_age();
  std::string get_name();
  void set_name(std::string name);

  friend Person operator>(const Person &lhs, const Person &rhs);
  friend std::ostream &operator<<(std::ostream &out, const Person &p);
};

// Constructor.
Person::Person(std::string name, int age) : name{name}, age{age} {}

// Overloaded operator for comparison of two `Person` objects.
Person operator>(const Person &lhs, const Person &rhs) {
  // If this person's age is greater than the others,
  // return true.
  if (lhs.age > rhs.age) {
    return lhs;
  }
  return rhs;
}

// Overload the output stream operator.
std::ostream &operator<<(std::ostream &out, const Person &p) {
  out << p.name;
  return out;
}

int main() {
  Vehicle tesla{"Tesla Roadster", 0, 0};
  Vehicle lamborghini{"Lamborghini 350 GT", 3464, 12};

  bool morecc = lamborghini > tesla;

  Person *elon = new Person{"Elon Musk", 47};
  Person *mark = new Person{"Mark Zuckerberg", 34};
  Person *older = bigger(mark, elon);

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
