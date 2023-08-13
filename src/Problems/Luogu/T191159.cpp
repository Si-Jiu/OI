#include <bits/stdc++.h>

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
    cin >> n;
    dfs();

    return 0;
}
