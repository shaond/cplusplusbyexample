# Hello World

This is a basic C++ example; it simply prints “Hello World” to our terminal screen.

```
    #include <iostream>
    
    using namespace std;
    
    int main() {
        cout << "Hello World!" << endl;
        return 0;
    }
```

To compile this example, use the `g++` compiler and run the following command:

```
$ g++ -Wall -std=c++14 helloworld.cpp -o helloworld
$ ./helloworld
```