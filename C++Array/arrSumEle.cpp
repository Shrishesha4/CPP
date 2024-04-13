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
    
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of elements in the array is " << sum << endl;
    
    return 0;
}