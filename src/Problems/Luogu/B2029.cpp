#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int h, r;
    cin >> h >> r;
    cout << ceil(20 * 1000 / (h * 3.14 * r * r)) << endl;

    return 0;
}
