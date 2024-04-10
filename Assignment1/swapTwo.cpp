#include <iostream>
using namespace std;

void swap(int a, int b);

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "\nThe numbers before swapping are a: " << num1 << " b: " << num2 <<  ".\n";
    swap(num1, num2);
    
    return  0;
}

void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nThe numbers after swapping are a: " << a << " b: " << b << ".\n";

}