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