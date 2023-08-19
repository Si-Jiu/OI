#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int b[100 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    b[1] = 0;
    for (int i = 2; i <= n; i++)
        b[i] = i - b[i - 1];
    cout << b[n] << endl;

    return 0;
}
