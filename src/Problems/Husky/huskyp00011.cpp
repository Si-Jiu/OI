#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    if (n <= 7 && n % 2 != 0)
        cout << "big" << endl;
    else if (n >= 8 && n % 2 == 0)
        cout << "big" << endl;
    else
        cout << "small" << endl;

    return 0;
}
