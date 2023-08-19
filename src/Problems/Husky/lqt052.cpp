#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, sum = 1;

void dfs(int val = 0, string s = "") {
    if (val == n && s.length() != 2)
        cout << s.substr(1, s.length() - 1) << endl;
    else
        for (int i = 1; i <= n; i++)
            if (val + i <= n)
                if (s.empty() || i >= s[s.length() - 1] - '0') {
                    string b = s + '+' + char(i + '0');
                    dfs(val + i, b);
                }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    dfs();

    return 0;
}
