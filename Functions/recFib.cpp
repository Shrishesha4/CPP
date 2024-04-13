#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "Fibonacci series: ";
  for (int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
  }
  cout << endl;
  return 0;
}