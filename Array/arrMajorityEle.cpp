#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int majority_element;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            majority_element = arr[i];
            count = 1;
        } else if (majority_element == arr[i]) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == majority_element) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << "The majority element is: " << majority_element << endl;
    } else {
        cout << "There is no majority element in the array." << endl;
    }

    return 0;
}