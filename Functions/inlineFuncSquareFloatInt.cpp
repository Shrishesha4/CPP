#include <iostream>
using namespace std;

inline float square(float x) {
    return x * x;
}

inline int square(int x) {
    return x * x;
}

int main() {
    float f = 2.5;
    int i = 3;

    cout << "The square of " << f << " is " << square(f) << endl;
    cout << "The square of " << i << " is " << square(i) << endl;

    return 0;
}