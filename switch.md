# Switch statements

The switch statement is like all the other languages, except the item being 
switched on is wrapped in parentheses and the case statements have curly braces.

```cpp
    switch (action) {
      case 1: {
        // We want to add to the students map.
        cin >> name >> marks;

        // Find the position of the student with `name`.
        std::map<string, int>::iterator it = students.find(name);

        // If a student with `name` does not exist, create
        // the student and insert their marks.
        if (it == students.end()) {
          students.insert(make_pair(name, marks));
        } else {
          // Student exists, lets add to their marks.
          students[name] += marks;
        }
        break;
      }
      case 2: {
        // We want to delete the students marks.
        cin >> name;
        students.erase(name);
        break;
      }
      case 3: {
        // We want to return the marks for a student.
        cout << students[name];
        break;
      }
    }
```