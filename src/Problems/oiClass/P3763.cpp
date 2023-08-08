#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long cnt = 1;
    short tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cnt -= tmp;
    }
    cout << cnt << endl;

    return 0;
}
