#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;
map<string, int> cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        cnt[tmp] = 0;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;
        if (cnt.count(tmp) == 0)
            cout << "WRONG" << endl;
        else if (cnt[tmp] == 0) {
            cout << "OK" << endl;
            cnt[tmp]++;
        } else
            cout << "REPEAT" << endl;
    }

    return 0;
}
