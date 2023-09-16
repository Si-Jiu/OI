#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin >> x;
    cout << fixed << setprecision(9)
         << sqrt((unsigned long long)x * (12800000 + (unsigned long long)x))
         << endl;

    return 0;
}
