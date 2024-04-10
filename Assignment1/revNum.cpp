#include <iostream>
using namespace std;

int main() {
    int num, reversed_num = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed Number: " << reversed_num << endl;

    return 0;
}