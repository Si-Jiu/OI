#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double money = 0, t;
    cin >> t;
    money += t;
    cin >> t;
    money += t * 0.1;
    cout << floor(money / 1.9);

    return 0;
}
