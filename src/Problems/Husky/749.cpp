#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, y, z, a;
    cin >> x >> y >> z >> a;
    if (x > y)
        cout << "Damn!" << endl;
    else if (a > z)
        cout << "Damn!" << endl;
    else
        cout << "RUN!" << endl;

    return 0;
}
