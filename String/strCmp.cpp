#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;
    
    if (str1.length() != str2.length()) {
        cout << "The strings are not equal." << endl;
        return 0;
    }
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
        cout << "The strings are not equal." << endl;
        return 0;
        }
    }

    cout << "The strings are equal." << endl;

    return 0;
}