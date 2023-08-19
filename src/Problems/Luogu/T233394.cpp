#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q, temp;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> temp;
        if (temp == 1) {
            cin >> temp;
            a.push_back(temp);
        } else if (temp == 2) {
            int k;
            cin >> k >> temp;
            a.resize(a.size() + k, temp);
            cout << a.size() << endl;
        } else if (temp == 3) {
            int i;
            cin >> i >> temp;
            a[i] = temp;
        } else if (temp == 4) {
            for (int i = 0; i < a.size(); i++)
                cout << a[i] << ' ';
            cout << endl;
        }
    }

    return 0;
}
