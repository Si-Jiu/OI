#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long cnt = 0;
    for (long long c = 1; c < n; c++)
        for (long long a = 1; a * a <= n - c; a++)
            if ((n - c) % a == 0) {
                cnt++;
                if ((n - c) / a != a)
                    cnt++;
            }
    cout << cnt << endl;

    return 0;
}
