#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double x;
    cin >> x;
    cout << (x >= 0 ? floor(x) : ceil(x)) << endl;

    return 0;
}
