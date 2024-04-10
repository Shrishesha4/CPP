#include <iostream>

using namespace std;

int main() {
  double principal, rate, time;

  cout << "Enter the principal amount: ";
  cin >> principal;

  cout << "Enter the interest rate (as a percentage): ";
  cin >> rate;

  cout << "Enter the time period (in years): ";
  cin >> time;

  double simpleInterest = (principal * rate * time) / 100;

  double compoundInterest = principal * (pow((1 + rate / 100), time) - 1);

  cout << "Simple Interest: " << simpleInterest << endl;
  cout << "Compound Interest: " << compoundInterest << endl;

  return 0;
}
