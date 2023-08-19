#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> section;
    int cnt[m];
    for (int i = 0; i < n; i++) {
        section.push_back(a[i]);
        cnt[a[i]]++;
        // 1 2 2 3 4 5 1
        // while (cnt[section.front()] > 1)
    }

    return 0;
}
