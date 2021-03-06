#include <iostream>

using namespace std;

double average_cost(double *valuesArr, size_t *count) {
  double total{0};

  for (unsigned i = 0; i < *count; i++) {
    // Here were doing pointer arithmetic,
    // so we need to dereference the pointer.
    // cout << *(valuesArr + i) << endl;

    // Here, we're using Array subscript notation, so don't
    // need to dereference using the `*` (asterisk).
    // cout << valuesArr[i] << endl;

    // Add all the values in the Array to the total.
    total = total + valuesArr[i];
  }

  // Return the average cost.
  return (total / *count);
}

int main() {
  double prices[5]{23.5, 12.5, 4.12, 88.90, 67.00};
  double *pPrices = prices;
  size_t size{5};

  cout << average_cost(pPrices, &size) << endl;

  return 0;
}