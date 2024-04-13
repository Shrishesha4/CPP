#include <iostream>
using namespace std;

inline int sum(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

inline int product(int a, int b, int c, int d, int e) {
    return a * b * c * d * e;
}

int main() {
    int a, b, c, d, e;

    cout << "Enter 5 numbers: ";
    cin >> a >> b >> c >> d >> e;

    cout << "Sum of the numbers: " << sum(a, b, c, d, e) << endl;
    cout << "Product of the numbers: " << product(a, b, c, d, e) << endl;

    return 0;
}