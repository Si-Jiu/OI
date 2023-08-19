#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

unsigned long long fab[100000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    fab[0] = 1;
    fab[1] = 1;
    for (int i = 2; i < n; i++)
        fab[i] = fab[i - 1] + fab[i - 2];
    cout << fab[n - 1] << endl;

    return 0;
}
