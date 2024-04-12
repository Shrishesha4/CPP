#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello";
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    cout << "Length of the string: " << len << endl;

    return 0;
    }