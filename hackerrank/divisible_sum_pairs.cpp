#include <iostream>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    int a[n], i;
    for (i = 0; i < n; i++) cin >> a[i];

    int j, r = 0;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 1; j < n; j++)
        {
            if (i < j && (a[i] + a[j]) % k == 0) r++;
        }
    }

    cout << r << endl;
    return 0;
}

