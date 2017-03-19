#include <iostream>
using namespace std;


int main() {
    int  x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    if(x2 > x1)
    {
        string r;
        if ((v1 > v2) && ((x1 - x2) % (v2 - v1) == 0)) r = "YES";
        else r = "NO";

        cout << r << endl;
    }
    return 0;
}

