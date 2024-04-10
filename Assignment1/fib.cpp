#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int num; 
    cout << "Enter a number: ";
    cin >> num;
    fib(num);
    return 0;
}
int fib(int n){
    int n1 = 0, n2 = 1, nt;
    cout << n1 << " " << n2;
    for (int i = 0; i < n; i++){
        nt = n1 + n2;
        n1 = n2;
        n2 = nt;
        cout << " " << nt;
    }
    cout << "\n";
}