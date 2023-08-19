#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short h, m, s;
    cin >> h >> m >> s;
    cout << h * 60 * 60 + m * 60 + s << endl;

    return 0;
}
