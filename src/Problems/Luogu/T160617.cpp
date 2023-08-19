#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;
vector<int> tj[20];

void dfs(int deep, string s) {
    if (deep > n)
        cout << s << endl;
    else
        for (short i = 1; i <= n; i++) {
            char c = char('0' + i);
            if (s.find(c) != string::npos)
                continue;
            bool flag = 0;
            for (int j = 0; j < tj[i].size(); j++)
                if (s.find(char(tj[i][j] + '0')) != string::npos) {
                    flag = 1;
                    break;
                }
            if (flag)
                continue;
            string b = s + c;
            dfs(deep + 1, b);
        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        tj[x].push_back(y);
    }
    dfs(1, "");

    return 0;
}
