# Type casting

Converting one type to another is pretty commonplace.

If you are converting from primitive type to another, say an `int` to a `long` the `int` would be _promoted_ to the type `long`. _This is called type promotion_.

On the other hand, if you want to explicitly cast from one type to another:

```
#include <iostream>

using namespace std;

int main() {
  double d {10.5};
  int i;

  i = int(d);  // Functional cast.
  cout << i << endl;

  i = (int)d;  // C-style casting (also like in Golang).
  cout << i << endl;
}
```

**TIP**: Notice that functional casting looks like you are calling a _function_ - hence the `int (d)`.

