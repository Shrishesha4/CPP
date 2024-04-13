#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the array element: ";
        cin >> arr[i];
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
