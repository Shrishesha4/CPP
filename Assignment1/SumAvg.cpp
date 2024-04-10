#include <iostream>
using namespace std;

int sum(int a, int b, int c);
float avg(float a, float b, float c);

int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of three numbers are: " << sum(num1, num2, num3) << ".";
    cout << "\nThe average of three numbers are: " <<  avg(num1, num2, num3) << ".\n";
    
    return  0;
}

int sum(int a, int b, int c){
    int sum = a + b + c;
    return sum;
}

float avg(float a, float b, float c){
    float avg = (a + b + c) / 3;
    return avg;
}