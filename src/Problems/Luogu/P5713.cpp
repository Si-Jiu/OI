#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int local = 5 * n, luogu = 11 + 3 * n;
    cout << (local < luogu ? "Local" : "Luogu") << endl;

    return 0;
}
