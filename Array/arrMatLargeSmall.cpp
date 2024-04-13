#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int matrix[n][m];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    int largest = matrix[0][0];
    int smallest = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > largest) {
                largest = matrix[i][j];
            }
            if (matrix[i][j] < smallest) {
                smallest = matrix[i][j];
            }
        }
    }
    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << smallest << endl;

    return 0;
}