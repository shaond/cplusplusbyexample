# Exceptions

Exceptions are a great way to catch erronous state in your application and recover, or cleanup.
Like most other programming languages, exceptions have a familiar syntax, using the try/catch statements.

Here's an example of a divide by zero error with no exception handling. Setting litres to `0` would crash the program.

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main() {
  int kilometres;
  int litres;
  double kms_per_litre;

  cout << "Enter kms:" << endl;
  cin >> kilometres;
  cout << "Enter litres:" << endl;
  cin >> litres;

  kms_per_litre = kilometres / litres;

  return 0;
}
```

Here's the same code, but with exception handling using an integer (which is sorta lame):

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main() {
  int kilometres;
  int litres;
  double kms_per_litre;

  cout << "Enter kms:" << endl;
  cin >> kilometres;
  cout << "Enter litres:" << endl;
  cin >> litres;

  try {
    if (litres == 0 || kilometres == 0) {
      throw 0;  // Throw using an integer (although best practise is to use an
                // object).
    } else {
      kms_per_litre =
          static_cast<double>(kilometres) / static_cast<double>(litres);
    }
  } catch (int &err) {
    cerr << "Cannot divide zero, or divide by zero." << endl;
  }

  return 0;
}
```

Here's the same code above, but with a string thrown as an error:

```cpp
#include <iostream>
#include <memory>

using namespace std;

int main() {
  int kilometres;
  int litres;
  double kms_per_litre;

  cout << "Enter kms:" << endl;
  cin >> kilometres;
  cout << "Enter litres:" << endl;
  cin >> litres;

  try {
    if (litres == 0 || kilometres == 0) {
      throw string{"Cannot divide zero, or divide by zero."};
    } else {
      kms_per_litre =
          static_cast<double>(kilometres) / static_cast<double>(litres);
      cout << "Average: " << kms_per_litre << endl;
    }
  } catch (string &err) {
    cerr << err << endl;
  } catch (...) {
    cerr << "An unknown exception occured" << endl;
  }

  return 0;
}
```

And lastly, with a custom defined Exception:

```cpp
#include <iostream>
#include <memory>

using namespace std;

class DivideByZeroException {};

ostream &operator<<(ostream &out, const DivideByZeroException &d) {
  out << "Caught a divide by zero exception." << endl;
  return out;
}

int main() {
  int kilometres;
  int litres;
  double kms_per_litre;

  cout << "Enter kms:" << endl;
  cin >> kilometres;
  cout << "Enter litres:" << endl;
  cin >> litres;

  try {
    if (litres == 0 || kilometres == 0) {
      throw DivideByZeroException();
    } else {
      kms_per_litre =
          static_cast<double>(kilometres) / static_cast<double>(litres);
      cout << "Average: " << kms_per_litre << endl;
    }
  } catch (const DivideByZeroException &err) {
    cerr << err << endl;
  } catch (...) {
    cerr << "An unknown exception occured" << endl;
  }

  return 0;
}
```

## Warning

Note, that when an error is thrown, the program
needs to "unwind" the stack - which means that functions need to be popped off
the stack and scanned for code which will handle the exception.

The __dangerous__ side effect of this, is that when functions are popped off the stack,
objects associated with that function on that stack are deleted and code which deletes the object
may not have had a chance to run - leading to memory leaks.
