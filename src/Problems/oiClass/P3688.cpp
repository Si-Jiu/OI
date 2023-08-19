#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;
    long long cnt = 0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cnt += tmp - t;
    }
    cout << cnt << endl;

    return 0;
}
