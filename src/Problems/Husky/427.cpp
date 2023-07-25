#include <bits/stdc++.h>

using namespace std;

int main() {
    short x;
    cin >> x;
    cout << x % 10 + x / 10 % 10 + x / 100 << endl;

    return 0;
}
