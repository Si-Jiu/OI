#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
        cout << "yes" << endl;
    else if (year % 400 == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}
