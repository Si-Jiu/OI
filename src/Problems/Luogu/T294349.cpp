#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, id;
    short m, countryId;
    cin >> n >> m;
    vector<int> a[m + 1];
    for (int i = 0; i < n; i++) {
        cin >> id >> countryId;
        a[countryId].push_back(id);
    }
    for (short i = 1; i <= m; i++) {
        cout << i << ": ";
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
