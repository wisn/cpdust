#include <iostream>
using namespace std;

int main() {
    int n, x, sum;
    cin >> n;

    while (n--) {
        cin >> x;
        sum += x;
    }

    cout << sum << endl;
    return 0;
}

