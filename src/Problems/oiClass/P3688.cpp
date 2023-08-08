#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    long long cnt = 0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        cnt += tmp - t;
    }
    cout << cnt << endl;

    return 0;
}
