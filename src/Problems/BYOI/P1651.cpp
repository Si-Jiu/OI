#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int zhouji;
    cin >> zhouji;
    if (zhouji == 1)
        cout << "swim" << endl;
    else if (zhouji == 3)
        cout << "program" << endl;
    else if (zhouji == 5)
        cout << "read" << endl;
    else if (zhouji == 6)
        cout << "math" << endl;
    else
        cout << "rest" << endl;

    return 0;
}
