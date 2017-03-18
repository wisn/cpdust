#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int matrix[n][n];
    int k = n - 1;

    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> matrix[i][j];
        left  += matrix[i][i];
        right += matrix[i][k];
        k--;
    }

    int result = abs(left - right);

    cout << result << endl;
    return 0;
}


