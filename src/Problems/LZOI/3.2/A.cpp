#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short year;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? "yes"
                                                                   : "no")
         << endl;

    return 0;
}
