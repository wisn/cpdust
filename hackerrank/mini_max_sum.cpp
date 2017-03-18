#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int i, n = 5;
    vector <long int> num(5);
    for (i = 0; i < n; i++) cin >> num[i];

    sort(num.begin(), num.end());

    long int maxSum = 0, minSum = 0;
    for (i = 0; i < n; i++) {
        if (0 <= i && i < (n - 1)) minSum += num[i];
        if (1 <= i && i < n) maxSum += num[i];
    }

    cout << minSum << " " << maxSum << endl;
    return 0;
}

