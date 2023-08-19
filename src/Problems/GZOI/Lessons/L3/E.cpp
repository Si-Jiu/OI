#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, r;
    cin >> h >> r;
    cout << ceil(20000 / (3.14 * pow(r, 2) * h)) << endl;

    return 0;
}
