#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short y, m, hd;
    cin >> y >> m >> hd;
    short dayInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0 && y % 100 != 0)
        dayInMonth[1] = 29;
    else if (y % 400 == 0)
        dayInMonth[1] = 29;
    if (hd == dayInMonth[m - 1])
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
