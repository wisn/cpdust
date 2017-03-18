#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int x, y;
    while (n--) {
        cin >> x;

        if (x > 37) {
            y = 5 - (x % 5);
            if (y < 3) x += y;
        }

        cout << x << endl;
    }
    return 0;
}

