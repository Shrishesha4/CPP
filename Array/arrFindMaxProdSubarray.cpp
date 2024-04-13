#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_product = INT32_MIN;
    int curr_product = 1;
    for (int i = 0; i < n; i++) {
        curr_product *= arr[i];
        max_product = max(max_product, curr_product);
        if (curr_product == 0) {
            curr_product = 1;
        }
    }
    curr_product = 1;
    for (int i = n - 1; i >= 0; i--) {
        curr_product *= arr[i];
        max_product = max(max_product, curr_product);
        if (curr_product == 0) {
            curr_product = 1;
        }
    }
    cout << max_product << endl;

    return 0;
}