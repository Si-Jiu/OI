#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long cnt = 0;
    for (short i = 0; i < 5; i++) {
        long long need;
        cin >> need;
        cnt += need;
    }
    cout << cnt << endl;

    return 0;
}
