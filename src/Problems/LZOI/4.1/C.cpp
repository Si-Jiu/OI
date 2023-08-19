#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
