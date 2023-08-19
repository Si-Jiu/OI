#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << (n % 2 == 0 && 10 <= n && n <= 99 ? "Yes" : "No") << endl;

    return 0;
}
