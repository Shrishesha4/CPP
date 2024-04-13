#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    cout << "Enter the size of second array: ";
    cin >> n2;

    int arr1[n1], arr2[n2];
    cout << "Enter the elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int unionArr[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionArr[k++] = arr1[i++];
        } else if (arr2[j] < arr1[i]) {
            unionArr[k++] = arr2[j++];
        } else {
            unionArr[k++] = arr1[i++];
            j++;
        }
    }

    while (i < n1) {
        unionArr[k++] = arr1[i++];
    }

    while (j < n2) {
        unionArr[k++] = arr2[j++];
    }

    cout << "Union of the two arrays: ";
    for (int i = 0; i < k; i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    return 0;
}