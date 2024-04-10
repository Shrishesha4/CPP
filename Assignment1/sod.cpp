#include <iostream>
using namespace std;

int sumDigits(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The sum of digits of the number is " << sumDigits(n) << ".\n";

  
    return 0;
}

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return n % 10 + sumDigits(n / 10);
    }
}