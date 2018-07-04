# Class Templates

Class templates are similar to function templates, however are for a class.
Here's a complete example of how class templates are used:

```cpp
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

template <class T>
class AddElements {
 private:
  T element_;

 public:
  AddElements(T element) : element_{element} {}
  T add(T rhs) { return element_ + rhs; }
};

template <>
class AddElements<string> {
 private:
  string element_;

 public:
  AddElements(string element) : element_{element} {}
  string concatenate(string rhs) { return element_ + rhs; }
};

int main() {
  int n, i;
  cin >> n;
  for (i = 0; i < n; i++) {
    string type;
    cin >> type;
    if (type == "float") {
      double element1, element2;
      cin >> element1 >> element2;
      AddElements<double> myfloat(element1);
      cout << myfloat.add(element2) << endl;
    } else if (type == "int") {
      int element1, element2;
      cin >> element1 >> element2;
      AddElements<int> myint(element1);
      cout << myint.add(element2) << endl;
    } else if (type == "string") {
      string element1, element2;
      cin >> element1 >> element2;
      AddElements<string> mystring(element1);
      cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
```
