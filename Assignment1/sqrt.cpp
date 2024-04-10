#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    double squareRoot = sqrt(number);

    cout << "The square root of " << number << " is " << squareRoot << endl;

    return 0;
}