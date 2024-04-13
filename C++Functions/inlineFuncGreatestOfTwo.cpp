#include <iostream>
using namespace std;

inline int max(int a, int b) {
  return (a > b) ? a : b;
}

int main() {
  int num1, num2;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "The greatest number is: " << max(num1, num2) << endl;

  return 0;
}
