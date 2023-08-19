#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const long long LEN = 100000 + 5000;
long long pos[LEN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        long long x, y;
        memset(pos, -1, sizeof(pos));
        cin >> x >> y;
        queue<long long> sons;
        pos[x] = 0;
        sons.push(x);
        while (true) {
            long long dad = sons.front();
            if (dad == y) {
                cout << pos[dad] << endl;
                break;
            }
            sons.pop();
            long long newFront = dad + 1;
            if (newFront < LEN && pos[newFront] == -1) {
                sons.push(newFront);
                pos[newFront] = pos[dad] + 1;
            }
            long long newBack = dad - 1;
            if (newBack < LEN && pos[newBack] == -1) {
                sons.push(newBack);
                pos[newBack] = pos[dad] + 1;
            }
            long long newDouble = 2 * dad;
            if (newDouble < LEN && pos[newDouble] == -1) {
                sons.push(newDouble);
                pos[newDouble] = pos[dad] + 1;
            }
        }
    }

    return 0;
}
