#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int h[1000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> h[i];
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        for (int i = 0; i < n; i++)
            if (h[i] >= a) {
                cout << i + 1 << endl;
                break;
            }
    }

    return 0;
}
