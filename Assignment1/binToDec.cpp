#include <iostream>
#include <string>

using namespace std;

int main() {
    string bin;
    cout << "Enter a binary number: ";
    cin >> bin;

    int dec = 0;
    int base = 1;
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') {
        dec += base;
        }
        base *= 2;
    }
    cout << "The decimal number is: " << dec << endl;

    return 0;
}