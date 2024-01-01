#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int max1 = INT_MIN, min1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a = 0;
        cin >> a;
        max1 = max(max1, a);
        min1 = min(min1, a);
    }
    cout << max1 - min1 << endl;

    return 0;
}
