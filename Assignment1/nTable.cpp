#include <iostream>
using namespace std;

void printTable(int n);

int main(){
    int con;
    cout << "Enter the number: ";
    cin >> con;

    printTable(con);

    return 0;
}

void printTable(int n){
    int c=1;
    while (c <= 10) {
        cout << "\t" << c << " * " << n << " = " << c * n << endl;
        c++; 
    }
}