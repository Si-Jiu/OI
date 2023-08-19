#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n;

void dfs(int deep = 1, string s = "") {
    if (deep > n)
        cout << s << endl;
    else
        for (char i = 'a'; i <= 'c'; i++) {
            string b = s + i;
            dfs(deep + 1, b);
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
