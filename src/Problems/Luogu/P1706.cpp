#include <bits/stdc++.h>

using namespace std;

int n;

void dfs(int deep, string s)
{
    if (deep > n)
        cout << s << endl;
    else
        for (short i = 1; i <= n; i++)
        {
            char c = char('0' + i);
            if (s.find(c) != string::npos)
                continue;
            string b = s + "    " + c;
            dfs(deep + 1, b);
        }
}

int main()
{
    cin >> n;
    dfs(1, "");

    return 0;
}
