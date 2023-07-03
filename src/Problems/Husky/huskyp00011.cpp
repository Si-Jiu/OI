#include <bits/stdc++.h>

using namespace std;

int main() {
    short n;
    cin >> n;
    if (n <= 7 && n % 2 != 0)
        cout << "big" << endl;
    else if (n >= 8 && n % 2 == 0)
        cout << "big" << endl;
    else
        cout << "small" << endl;

    return 0;
}
