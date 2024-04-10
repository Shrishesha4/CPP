#include <iostream>
using namespace std;

int main() {
    int num, bin = 0, i = 1, rem;

    cout << "Enter a decimal number: ";
    cin >> num;

    while (num != 0) {
        rem = num % 2;
        bin = bin + rem * i;
        num /= 2;
        i *= 10;
    }

    cout << "Binary number: " << bin << endl;

    return 0;
}