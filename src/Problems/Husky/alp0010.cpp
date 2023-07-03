#include <bits/stdc++.h>

using namespace std;

int main() {
    short year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
        cout << 1 << endl;
    else if (year % 400 == 0)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
