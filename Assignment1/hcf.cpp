#include <iostream>
using namespace std;

int main() {
    int num1, num2, hcf;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int smaller = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= smaller; i++) {
      if (num1 % i == 0 && num2 % i == 0) {
        hcf = i;
      }
    }

    cout << "The HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
  }