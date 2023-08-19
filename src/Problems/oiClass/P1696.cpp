#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 5; i <= n; i++) {
        string a = to_string(i), b = to_string(pow(i, 2));
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        bool flag = true;
        for (int j = 0; j < a.length(); j++)
            if (a[i] != b[i]) {
                if (!j)
                    flag = false;
                break;
            }
        if (flag)
            cout << i << ' ';
    }

    return 0;
}
