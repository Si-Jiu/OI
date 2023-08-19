#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short s;
    cin >> s;
    for (short i = 0; i < 5; i++) {
        short used;
        cin >> used;
        s -= used;
    }
    cout << s << endl;

    return 0;
}
