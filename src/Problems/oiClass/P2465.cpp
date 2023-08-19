#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp >= x && tmp <= y)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
