#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainString;
    string subString;
    getline(cin, mainString);
    getline(cin, subString);


    size_t found = mainString.find(subString);

    if (found != string::npos) {
        cout << "The substring '" << subString << "' was found at position " << found << endl;
    } else {
        cout << "The substring '" << subString << "' was not found in the string" << endl;
    }

    return 0;
}
