# Default Params

Passing default parameters can be useful when calling functions.

```
int calculate_insurance_premium(double interest_rate) {
    // Do stuff to calculate premium
    return premium;
}
```

The default parameter looks like this:

```
int calculate_insurance_premium(double interest_rate = 6.5) {
    // Do stuff to calculate premium
    return premium;
}
```