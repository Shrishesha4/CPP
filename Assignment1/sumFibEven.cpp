#include <iostream>

using namespace std;

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int a = 0, b = 1, sum = 0;
    while (b <= limit) {
        if (b % 2 == 0) {
        sum += b;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }

    cout << "Sum of even Fibonacci numbers up to " << limit << " is: " << sum << endl;

    return 0;
}