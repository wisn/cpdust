#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, p, v, t, x, sum = 0;
    cin >> n;

    while (n--) {
        cin >> p >> v >> t;
        x    = p + v + t;
        sum += floor(x / 2);
    }

    cout << sum << endl;
    return 0;
}
