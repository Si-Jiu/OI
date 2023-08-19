#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;
vector<int> vote[10000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int id, countyId;
        cin >> id >> countyId;
        vote[countyId].push_back(id);
    }
    for (int i = 1; i <= m; i++) {
        cout << i << ": ";
        sort(vote[i].begin(), vote[i].end());
        for (int j = 0; j < vote[i].size(); j++)
            cout << vote[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
