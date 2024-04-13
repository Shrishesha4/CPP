#include <iostream>
using namespace std;

int main() {
    int n, m, p, q;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> n >> m;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> p >> q;
    if (m != p) {
        cout << "Matrices cannot be multiplied" << endl;
        return 0;
    }
    int a[10][10], b[10][10], c[10][0];
    cout << "Enter the elements of first matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of second matrix: " << endl;
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Product of the two matrices: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}