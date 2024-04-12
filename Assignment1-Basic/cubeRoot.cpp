#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    double cubeRoot = pow(number, 1.0 / 3.0);

    cout << "The cube root of " << number << " is: " << cubeRoot << endl;

    return 0;
}