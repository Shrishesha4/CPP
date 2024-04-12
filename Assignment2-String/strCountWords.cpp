#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;
    string word;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    count++;

    cout << "The number of words in the string is: " << count << endl;

    return 0;
}