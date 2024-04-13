#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int avg = 0;
    for (int i = 0; i <= n; i++) {
        avg += i;
    }
    cout << "The average of elements in the array is " << (avg/n) << endl;
    
    return 0;
}