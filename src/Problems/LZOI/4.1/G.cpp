#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < n; i++)
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0) {
            cout << i << endl;
            cnt++;
        }
    cout << cnt << endl;

    return 0;
}
