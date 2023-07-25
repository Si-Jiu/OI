#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < 1)
        cout << x << endl;
    else if (1 <= x && x < 10)
        cout << 2 * x - 1 << endl;
    else
        cout << 3 * x - 11 << endl;

    return 0;
}
