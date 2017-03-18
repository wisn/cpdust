#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m, c, r_m = 0, r_c = 0, x;
    while (n--) {
        cin >> m >> c;
        x = m - c;
        if (x > 0) r_m++;
        else if (x < 0) r_c++;
    }

    if (r_m > r_c) cout << "Mishka";
    else if (r_m < r_c) cout << "Chris";
    else cout << "Friendship is magic!^^";
    cout << endl;
    return 0;
}
