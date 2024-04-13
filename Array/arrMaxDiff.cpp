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

    int maxDiff = 0;
    int minElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        } else if (arr[i] - minElement > maxDiff) {
            maxDiff = arr[i] - minElement;
        }
    }

    cout << "The maximum difference between two elements in the array is: " << maxDiff << endl;

    return 0;
}