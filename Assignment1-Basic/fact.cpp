#include <iostream>
using namespace std;

int fact(int n);

int main(){
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    cout << "The factorial of " << num << " is " << fact(num) << "." << endl;

    return 0;
}

int fact(int n){
    if (n == 0){
        return 1;
    } else {
        return n * fact(n - 1);
    }
}