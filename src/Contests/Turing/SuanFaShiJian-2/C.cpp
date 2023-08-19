#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

map<int, vector<int>> friends;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        friends[x].push_back(y);
        friends[y].push_back(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        if (friends[t].empty()) {
            cout << "none" << endl;
            continue;
        }
        for (int j = 0; j < friends[t].size(); j++)
            cout << friends[t][j] << ' ';
        cout << endl;
    }

    return 0;
}
