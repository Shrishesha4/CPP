#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = toupper(ch);
        }

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            consonants++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}