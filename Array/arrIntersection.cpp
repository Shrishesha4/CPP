#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the first array: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    int m;
    cout << "Enter the size of the second array: ";
    cin >> m;

    int arr2[m];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
    return 0;
}