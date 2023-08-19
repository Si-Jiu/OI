#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) {
            flag = false;
            break;
        }
    cout << (flag ? "yes" : "no") << endl;

    return 0;
}
