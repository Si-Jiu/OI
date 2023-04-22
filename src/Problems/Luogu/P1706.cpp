#include <bits/stdc++.h>
#define short long long // IO千万题,longlong第一题,类型不规范,RE两行泪
#define llong long long
#define float double

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
