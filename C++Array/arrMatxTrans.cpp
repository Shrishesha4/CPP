#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;
    int matrix[n][m];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
