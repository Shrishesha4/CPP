#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    string temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "The first string is now: " << str1 << endl;
    cout << "The second string is now: " << str2 << endl;

    return 0;
}