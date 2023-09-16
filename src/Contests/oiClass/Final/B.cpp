#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[50 + 10];
bool used[50 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    unsigned long long sum = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            sum += a[i] * a[j];
    cout << sum << endl;

    return 0;
}
