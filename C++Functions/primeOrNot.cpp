#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
        return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << isPrime(num) << ", True. " << num << " is a prime number." << endl;
    } else {
        cout << isPrime(num) << ", False. " << num << " is not a prime number." << endl;
    }
    return 0;
}