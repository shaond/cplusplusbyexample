#include <iostream>
#include <string>

using namespace std;

class Vehicle {
  friend ostream &operator<<(ostream &out, const Vehicle &rhs);
  friend istream &operator>>(istream &in, Vehicle &rhs);

 private:
  string name;

 public:
  Vehicle();             // Empty constructor.
  Vehicle(string name);  // Overloaded constructor.
  ~Vehicle();            // Destructor.

  // Copy constructor.
  Vehicle(const Vehicle &source);

  // Move constructor.
  Vehicle(Vehicle &&source);

  // Copy assignment.
  Vehicle &operator=(const Vehicle &rhs);

  // Move assignment.
  Vehicle &operator=(Vehicle &&rhs);

  // Member functions.
  string get_name();
  void set_name(string name);
};

// Implement our member functions.
Vehicle::Vehicle(string name) : name{name} {}
Vehicle::Vehicle() : Vehicle{"Unnamed Vehicle"} {}
Vehicle::~Vehicle() {}

// Copy assignment.
Vehicle &Vehicle::operator=(const Vehicle &rhs) {
  // Make sure we're not trying to copy ourselves.
  if (this == &rhs) return *this;

  // Set our name from the right hand side.
  this->name = rhs.name;

  // Return a pointer to ourselves.
  return *this;
}

// Move assignment.
Vehicle &Vehicle::operator=(Vehicle &&rhs) {
  if (this == &rhs) return *this;

  // Get our name from the right hand side.
  this->name = rhs.name;

  // Make the name on the right hand side a nullptr.
  rhs.name = nullptr;

  // Return a copy of ourselves.
  return *this;
}

// This is overloading the output stream operator.
ostream &operator<<(ostream &os, const Vehicle &rhs) {
  // Taking the right-hand side's `name` and inserting it into
  // the ouput stream called `os`.
  os << rhs.name;
  return os;
}

// This overloads the input stream operator.
istream &operator>>(istream &in, Vehicle &rhs) {
  // Create a large character array to hold our name.
  char *tmpname = new char[1000];

  // Read from the input stream and put it into `tmpname`.
  in >> tmpname;

  // Create a new `Vehicle` object with the new name,
  // and use the super efficient `Move` assignment specified
  // above to change the pointer to this new object.
  rhs = Vehicle{tmpname};

  // Make sure we delete the object we created on the heap.
  delete[] tmpname;

  // return the input stream.
  return in;
}

int main() {
  Vehicle *tesla = new Vehicle{"Tesla Roadster"};

  cout << *tesla << endl;  // Should now print the name of the vehicle.

  // Delete the object `tesla` from the Heap.
  delete tesla;
  return 0;
}
