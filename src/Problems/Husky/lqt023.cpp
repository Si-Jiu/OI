#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int t;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int copyX = x;
        int depth = 100000;
        bool flag = false;
        while (depth--) {
            int first = copyX % 10;
            int second = copyX / 10 % 10;
            int third = copyX / 100 % 10;
            int fourth = copyX / 1000 % 10;
            int fifth = (first + second + third + fourth) % 10;
            copyX = copyX * 10 % 10000 + fifth;
            if (copyX == y) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
