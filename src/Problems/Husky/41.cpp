#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, target;
    cin >> n >> target;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == target) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
