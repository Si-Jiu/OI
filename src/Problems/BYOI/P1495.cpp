#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int x;
    cin >> x;
    long long cnt = 0;
    for (int i = 1; x; i++)
        if (x > i) {
            x -= i;
            cnt += i * i;
        } else {
            cnt += x * i;
            break;
        }
    cout << cnt << endl;

    return 0;
}
