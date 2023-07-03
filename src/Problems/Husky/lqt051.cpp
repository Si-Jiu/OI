#include <bits/stdc++.h>

using namespace std;

int n;

void dfs(int deep = 1, string s = "") {
    if (deep > n)
        cout << s << endl;
    else
        for (int i = 1; i <= n; i++) {
            char c = '0' + i;
            if (s.find(c) != string::npos)
                continue;
            string b = s + "    " + c;
            dfs(deep + 1, b);
        }
}

int main() {
    cin >> n;
    dfs();

    return 0;
}
