#include <bits/stdc++.h>

using namespace std;

short n, r;

void dfs(short deep = 1, string s = "")
{
    if (deep > r)
        cout << s << endl;
    else
        for (short i = 1; i <= n; i++)
        {
            char c = '0' + i;
            if (s.find(c) != string::npos)
                continue;
            string b = s + "  " + c;
            dfs(deep + 1, b);
        }
}

int main()
{
    cin >> n >> r;
    dfs();

    return 0;
}
