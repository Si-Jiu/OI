#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, n;
    cin >> x >> n;
    cout << fixed << setprecision(0) << pow(x + 1, n) << endl;

    return 0;
}
