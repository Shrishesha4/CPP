#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;

    cout << "Enter the element to be searched: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}