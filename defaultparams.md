# Default Params

Passing default parameters can be useful when calling functions.

```cpp
int calculate_insurance_premium(double interest_rate) {
    // Do stuff to calculate premium
    return premium;
}
```

The default parameter looks like this:

```cpp
int calculate_insurance_premium(double interest_rate = 6.5) {
    // Do stuff to calculate premium
    return premium;
}
```
