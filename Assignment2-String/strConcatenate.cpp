#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    string str3 = str1 + str2;

    cout << "The concatenated string is: " << str3 << endl;

    return 0;
}