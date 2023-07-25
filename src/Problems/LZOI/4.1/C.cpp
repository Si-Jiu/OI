#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cnt += i;
    cout << cnt << endl;

    return 0;
}
