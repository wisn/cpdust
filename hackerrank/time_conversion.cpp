#include <iostream>
#include <string>
using namespace std;


int main() {
    string hours;
    cin >> hours;

    int h;
    h = stoi(hours.substr(0, 2));

    string m, s;
    m = hours.substr(3, 2);
    s = hours.substr(6, 2);

    string nh, th = hours.substr(8, 2);
    if (th == "PM" && h != 12) h += 12;
    if (h > 23 || (th == "AM" && h == 12)) h = 0;
    if (h < 9) nh = "0" + to_string(h);
    else nh = to_string(h);

    cout << nh << ":" << m << ":" << s << endl;
    return 0;
}
