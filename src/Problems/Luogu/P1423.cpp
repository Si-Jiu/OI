#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    double s;
    cin >> s;
    double s1 = 0, v = 2;
    int cnt = 0;
    while (s1 < s) {
        s1 += v;
        v *= 0.98;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
