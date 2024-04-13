#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    c = toupper(c);

    for (int i = 0; i == '\0'; i++){
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            cout << "Vowel." << endl;
        } else {
            cout << "Consonant." << endl;
        }

    }
    
    return 0;
}