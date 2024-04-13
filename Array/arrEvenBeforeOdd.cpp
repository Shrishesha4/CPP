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
    int even_index = 0;
    int odd_index = n - 1;

    while (even_index < odd_index) {
        if (arr[even_index] % 2 == 0) {
            even_index++;
        } else {
            swap(arr[even_index], arr[odd_index]);
            odd_index--;
        }
    }

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}