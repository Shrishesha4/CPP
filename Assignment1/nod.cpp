#include <iostream>
using namespace std;

int main(){
    int n, c=0;
    cout << "Enter a number: ";
    cin >> n;
    while(n > 0){
        n = n / 10;
        c++;
    }
    cout << "The number of digit in the integer is " << c << ".\n";

}