#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int index = 2;
    int element = 6;

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;

    size++;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}