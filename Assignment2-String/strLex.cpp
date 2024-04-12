#include <iostream>

using namespace std;

int main() {
    string names[] = {"John", "Jane", "Mary", "Bob", "Alice"};
    int n = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
        if (names[i] > names[j]) {
            string temp = names[i];
            names[i] = names[j];
            names[j] = temp;
        }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}