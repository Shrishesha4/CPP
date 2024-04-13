#include <iostream>
using namespace std;

// call by value
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// call by reference
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 40;
    int b = 50;
    cout << "Before swap: a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << " b = " << b << endl;

    int x = 5;
    int y = 10;
    cout << "Before swap: x = " << x << " , y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}