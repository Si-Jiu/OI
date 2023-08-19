#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int cnt = 0;
    short in;
    do {
        cin >> in;
        cnt += in;
    } while (in != 0);
    cout << cnt << endl;

    return 0;
}
