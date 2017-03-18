#include <iostream>
using namespace std;


int main() {
    float n;
    cin >> n;

    int x;
    float po = 0, ne = 0, ze = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0) po++;
        else if (x < 0) ne++;
        else ze++;
    }

    cout << po / n << endl;
    cout << ne / n << endl;
    cout << ze / n << endl;
    return 0;
}

