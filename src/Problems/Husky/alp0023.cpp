#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    short n;
    cin >> n;
    long long cnt = 1;
    for (short i = 0; i < n; i++) {
        short in;
        cin >> in;
        cnt *= in;
    }
    cout << cnt << endl;

    return 0;
}
