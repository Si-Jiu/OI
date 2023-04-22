#include <bits/stdc++.h>
#define short long long // IO千万题,longlong第一题,类型不规范,RE两行泪
#define llong long long
#define float double

using namespace std;

int n, m, tmp, max1, sum = 0;
deque<int> c;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
        c.push_back(tmp);
        if (c.size() > m)
        {
            sum -= c.front();
            c.pop_front();
        }
        if (sum > max1)
            max1 = sum;
    }
    cout << max1;

    return 0;
}
