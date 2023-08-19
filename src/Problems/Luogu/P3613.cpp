#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> parcel[n];
    for (int b = 0; b < q; b++) {
        short operation;
        cin >> operation;
        if (operation == 1) {
            int i, j, k;
            cin >> i >> j >> k;
            parcel[i].resize(j);
            parcel[i][j] = k;
        } else {
            int i, j;
            cin >> i >> j;
            cout << parcel[i][j] << endl;
        }
    }

    return 0;
}
