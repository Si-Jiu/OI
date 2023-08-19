#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin >> num;
    cout << (num >= 10 ? 8 * num * 0.75 / 10 : 8.0 * num / 10) << endl;

    return 0;
}
