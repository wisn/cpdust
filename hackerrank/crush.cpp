#include <iostream>
using namespace std;


int main() {
    long int n, m;
    cin >> n >> m;

    long int *list = new long int[n]();
    long int a, b, k;
    while (m--) {
        cin >> a >> b >> k;
        list[a - 1] += k;
        if (b < n) list[b] -= k;
    }

    long int max = 0;
    k = 0;
    for (long int i = 0; i < n; i++) {
        k += list[i];
        if (k > max) max = k;
    }

    cout << max << endl;
    return 0;
}

