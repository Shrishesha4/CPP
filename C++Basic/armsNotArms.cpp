#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0;
    int temp = num;
    int length = 0;

    while (temp != 0) {
        length++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, length);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}