#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += (n - i) * (n - i);
    cout << sum << endl;

    return 0;
}
