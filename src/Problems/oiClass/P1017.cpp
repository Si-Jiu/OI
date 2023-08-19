#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unsigned long long sum = 1;
    for (int i = 1; i <= n; i += 2)
        sum *= i;
    cout << sum << endl;

    return 0;
}
