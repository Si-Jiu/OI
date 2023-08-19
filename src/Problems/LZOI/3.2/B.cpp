#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    bool s;
    int w;
    cin >> s >> w;
    if (s)
        if (w > 1)
            cout << 8 + w - 1 << endl;
        else
            cout << 8 << endl;
    else if (w > 1)
        cout << 10 + (w - 1) * 2 << endl;
    else
        cout << 10;

    return 0;
}
