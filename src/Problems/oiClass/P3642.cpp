#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned long long n;
    cin >> n;
    cout << fixed << setprecision(0) << (unsigned long long)pow(2, n) - 1
         << endl;

    return 0;
}
