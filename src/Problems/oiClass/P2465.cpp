#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp >= x && tmp <= y)
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}
