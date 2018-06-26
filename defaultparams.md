# Default Params

Passing default parameters can be useful when calling functions.

```cpp
double calculate_insurance_premium(double interest_rate) {
    // Do stuff to calculate premium
    return premium;
}
```

The default parameter looks like this (note the `= 6.5` in the parameter list):

```cpp
double calculate_insurance_premium(double interest_rate = 6.5) {
    // Do stuff to calculate premium
    return premium;
}
```
