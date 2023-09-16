#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int t[100 + 10], cnt[100 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> t[i] >> cnt[i];
    int now = 0, cnt1 = 0;
    bool uncleared = true;
    while (uncleared) {
        uncleared = false;
        bool listened = false;
        for (int i = 0; i < n; i++) {
            if (cnt[i] <= 0)
                continue;
            uncleared = true;
            if (now % t[i] == 0) {
                listened = true;
                cnt[i]--;
            }
        }
        if (listened)
            cnt1++;
        now++;
    }
    cout << cnt1 << endl;

    return 0;
}
