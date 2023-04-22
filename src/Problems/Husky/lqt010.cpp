#include <bits/stdc++.h>
#define llong long long

using namespace std;

llong n, tmp;
vector<llong> s;

int main()
{
    cin >> n;
    for (llong i = 0; i < n; i++)
    {
        cin >> tmp;
        s.push_back(tmp);
    }
    sort(s.begin(), s.end());
    tmp = 0;
    for (llong i = 1; i < s.size() - 1; i++)
        tmp += s[i];
    printf("%.2f", tmp * 1.0 / (s.size() - 2));

    return 0;
}
