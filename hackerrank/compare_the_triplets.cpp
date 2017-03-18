#include <iostream>
using namespace std;

int main() {
    int a[3], b[3], n, r_a, r_b;
    n = 3;
    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) r_a++;
        else if (a[i] < b[i]) r_b++;
    }

    cout << r_a << " " << r_b << endl;
    return 0;
}

