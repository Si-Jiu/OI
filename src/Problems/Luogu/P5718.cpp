#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int min1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        min1 = min(a, min1);
    }
    cout << min1 << endl;

    return 0;
}
