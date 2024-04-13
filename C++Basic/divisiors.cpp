#include <iostream>
using namespace std;

void getDivisor(int a);

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "The divisors are,\n";
    getDivisor(num);

}

void getDivisor(int a){
    for (int i = 0; i < a; i++){
        if (a % i == 0){
            cout << "\t" << i << endl;
        }
    }
}