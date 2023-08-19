#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int year;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 0)
         << endl;

    return 0;
}
