#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        secondaryDiagonalSum += matrix[i][j];
    }

    cout << "Sum of primary diagonal: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}