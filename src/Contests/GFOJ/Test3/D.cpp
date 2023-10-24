#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    long long a, b, cnt = 0;
    cin >> a >> b;
    for (long long i = a; i <= b; i += 4 - i % 4)
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            cnt++;
    cout << cnt << endl;

    return 0;
}
