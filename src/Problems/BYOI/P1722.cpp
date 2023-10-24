#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int i1 = i;
        long long i2 = i * i;
        bool flag = true;
        while (i1 != 0) {
            if (i2 % 10 != i1 % 10) {
                flag = false;
                break;
            }
            i2 /= 10;
            i1 /= 10;
        }
        if (flag)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
