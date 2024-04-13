#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    int years = days / 365;
    int weeks = (days % 365) / 7;
    int days_remaining = (days % 365) % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days_remaining << endl;

    return 0;
}