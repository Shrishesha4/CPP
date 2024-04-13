#include <iostream>

using namespace std;

int main() {
  int base, exponent, result;

  cout << "Enter base and exponent: ";
  cin >> base >> exponent;

  result = 1;
  for (int i = 0; i < exponent; i++) {
    result *= base;
  }

  cout << "Result: " << result << endl;

  return 0;
}
