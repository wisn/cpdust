#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long int x, sum;
    while (n--) {
        cin >> x;
        sum += x;
    }

    cout << sum << endl;
    return 0;
}

