#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    // freopen("excel.in", "r", stdin);
    // freopen("excel.out", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    priority_queue<int, vector<int>, greater<int>> a1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a1.push(a[i]);
    }
    int a2[n];
    int pre = a1.top();
    for (int i = 0; i < n; i++) {
        if (i == 0 || a1.top() != pre)
            for (int j = 0; j < n; j++) {
                if (a[j] == a1.top())
                    a2[j] = i + 1;
            }
        pre = a1.top();
        a1.pop();
    }
    for (int i = 0; i < n; i++)
        cout << a2[i] << ' ';

    return 0;
}
