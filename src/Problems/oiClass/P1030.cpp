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
    for (int i = 3; i <= n; i++)
        cnt += i % 3 == 0;
    cout << cnt << endl;

    return 0;
}
