#include <iostream>
using namespace std;

int main() {
    float radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = M_PI * pow(radius, 2);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}