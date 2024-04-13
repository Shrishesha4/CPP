#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    double up = b * b - 4 * a * c;

    if (up < 0) {
        cout << "The equation has no real roots." << endl;
        return 0;
    }

    double root1 = (-b + sqrt(up)) / (2 * a);
    double root2 = (-b - sqrt(up)) / (2 * a);

    cout << "The roots of the equation are: " << root1 << " and " << root2 << endl;

    return 0;
}