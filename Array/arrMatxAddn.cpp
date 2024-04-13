#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10], m, n, p, q;
    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> m >> n;
    cout << "Enter the elements of matrix A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) { cin >> a[i][j]; }
    }
    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> p >> q;
    if (m != p || n != q) {
        cout << "The matrices cannot be added because they are not of the same size.\n";
        return 0;
    }
    cout << "Enter the elements of matrix B:\n";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) { cin >> b[i][j]; }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) { c[i][j] = a[i][j] + b[i][j]; }
    }
    cout << "The sum of the two matrices is:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) { cout << c[i][j] << " "; }
        cout << endl;
    }
    return 0;
}