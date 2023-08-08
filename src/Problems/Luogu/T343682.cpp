#include <bits/stdc++.h>

using namespace std;

queue<int> servers[10000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int time, server;
        cin >> time >> server;
        servers[server].push(time);
        while (servers[server].back() - servers[server].front() > 1000)
            servers[server].pop();
        cout << servers[server].size() << endl;
    }

    return 0;
}
