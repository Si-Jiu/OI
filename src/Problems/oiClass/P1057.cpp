#include <bits/stdc++.h>

using namespace std;

int a[120 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
        int cnt = 0;
        for (int j = 0; j <= 120; j++)
            if (j > x)
                cnt += a[j];
        cout << cnt << ' ';
    }
    cout << endl;

    return 0;
}
