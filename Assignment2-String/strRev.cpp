#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversed_str;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }


    cout << "Reversed string: " << reversed_str << endl;

    return 0;
}