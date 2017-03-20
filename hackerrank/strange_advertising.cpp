#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int r = 0, p = 5;
    while (n--)
    {
        p /= 2;
        r += p;
        p *= 3;
    }

    cout << r << endl;
    return 0;
}

