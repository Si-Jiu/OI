#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    a -= 12;
    if (a < 0)
        cout << 24 + a << endl;
    else
        cout << a << endl;

    return 0;
}
