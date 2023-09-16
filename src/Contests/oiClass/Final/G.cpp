#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int pre, cnt = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (i != 0 && tmp < pre) {
            cnt += pre - tmp;
            tmp += pre - tmp;
        }
        pre = tmp;
    }
    cout << cnt << endl;

    return 0;
}
