#include <iostream>
using namespace std;


int main() {
    long long int s, t;
    cin >> s >> t;

    long long int a, b;
    cin >> a >> b;

    long long int n, m;
    cin >> n >> m;

    long long int x, r_a = 0, r_b = 0;
    while (n--) {
        cin >> x;
        x = a + x;
        if (s <= x && x <= t) r_a++;
    }

    while (m--) {
        cin >> x;
        x = b + x;
        if (s <= x && x <= t) r_b++;
    }

    cout << r_a << endl << r_b << endl;
    return 0;
}

