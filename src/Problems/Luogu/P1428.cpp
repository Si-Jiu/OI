#include <bits/stdc++.h>
#define endl '\n'

int n, a[100 + 10];

using namespace std;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])
                cnt++;
        cout << cnt << ' ';
    }
    cout << endl;

    return 0;
}
