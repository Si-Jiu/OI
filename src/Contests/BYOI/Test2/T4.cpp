#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[100000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] + a[j] == k)
                cnt++;
    cout << cnt << endl;

    return 0;
}
