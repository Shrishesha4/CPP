#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    double result;
    switch (op) {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero is undefined." << endl;
            return 1;
        } else {
            result = num1 / num2;
        }
        break;
        default:
        cout << "Error: Invalid operator." << endl;
        return 1;
    }

    cout << "The result is: " << result << endl;

    return 0;
}