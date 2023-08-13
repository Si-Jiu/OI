#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int local = 5 * n, luogu = 11 + 3 * n;
    cout << (local < luogu ? "Local" : "Luogu") << endl;

    return 0;
}
