#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    cout << sum << endl;

    return 0;
}
