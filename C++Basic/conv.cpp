#include <iostream>
using namespace std;

int main() {
    double inches;
    int choice;

    cout << "Enter the length in inches: ";
    cin >> inches;

    cout << "Choose the conversion method:" << endl;
    cout << "1. Convert to yards, feet, and inches" << endl;
    cout << "2. Convert to feet and inches" << endl;
    cin >> choice;

    switch (choice) {
        case 1: {
            int yards = inches / 36;
            int feet = (inches - yards * 36) / 12;
            int remainingInches = inches - yards * 36 - feet * 12;

            cout << "The length is " << yards << " yards, " << feet << " feet, and " << remainingInches << " inches." << endl;
            break;
        }
        case 2: {
            int feet = inches / 12;
            int remainingInches = inches - feet * 12;

            cout << "The length is " << feet << " feet and " << remainingInches << " inches." << endl;
            break;
        }
        default: {
            cout << "Invalid choice. Please choose 1 or 2." << endl;
            break;
        }
    }

    return 0;
}