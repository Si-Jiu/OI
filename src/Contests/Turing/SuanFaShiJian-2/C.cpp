#include <bits/stdc++.h>

using namespace std;

map<int, vector<int>> friends;

int main() {
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
