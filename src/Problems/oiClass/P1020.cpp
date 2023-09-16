#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

vector<int> s[1000000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        s[cur].push_back(i);
        cur++;
        if (cur >= m)
            cur = 0;
    }
    for (int i = 0; i < s[k - 1].size(); i++)
        cout << s[k - 1][i] << ' ';
    cout << endl;

    return 0;
}
