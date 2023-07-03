#include <bits/stdc++.h>

using namespace std;

int main() {
    double money = 0, t;
    cin >> t;
    money += t;
    cin >> t;
    money += t * 0.1;
    cout << floor(money / 1.9);

    return 0;
}
