#include <bits/stdc++.h>
#define short long long // OI千万题,longlong第一题,类型不规范,RE两行泪
#define llong long long
#define float double

using namespace std;

int n, sum = 1;

void dfs(int val = 0, string s = "")
{
    if (val == n && s.length() != 2)
        cout << s.substr(1, s.length() - 1) << endl;
    else
        for (int i = 1; i <= n; i++)
            if (val + i <= n)
                if (s.empty() || i >= s[s.length() - 1] - '0')
                {
                    string b = s + '+' + char(i + '0');
                    dfs(val + i, b);
                }
}

int main()
{
    cin >> n;
    dfs();

    return 0;
}
