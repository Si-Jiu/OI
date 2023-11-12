#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    long long cnt = 0;
    for (int i = 1; i <= n; i++) {
        int iCpy = i;
        while (iCpy != 0) {
            if (iCpy % 10 == x)
                cnt++;
            iCpy /= 10;
        }
    }
    cout << cnt << endl;

    return 0;
}
