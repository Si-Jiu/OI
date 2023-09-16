#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool pages[1000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        pages[x] = true;
    }
    int lost = 0, miss = 0;
    for (int i = 1; i <= n; i += 2) {
        if (pages[i] + pages[i + 1] == 0)
            lost++;
        else if (pages[i] + pages[i + 1] == 1)
            miss++;
    }
    cout << lost << endl;
    cout << miss << endl;

    return 0;
}
