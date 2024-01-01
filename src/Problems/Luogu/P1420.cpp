#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int last;
    cin >> last;
    int max_cnt = 0, cnt = 1;
    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        if (last == a - 1)
            cnt++;
        else
            cnt = 1;
        max_cnt = max(cnt, max_cnt);
        last = a;
    }
    cout << max_cnt << endl;

    return 0;
}
