#include <bits/stdc++.h>
#define short long long // IO千万题，longlong第一题，类型不规范，RE两行泪
#define llong long long
#define float double

using namespace std;

string n;
bool flag = false;

bool comp(const char &a, const char &b)
{
    return a > b;
}

int main()
{
    cin >> n;
    if (atoi(n.c_str()) % 30 != 0)
        cout << -1;
    else
    {
        sort(n.begin(), n.end(), comp);
        cout << n;
    }
    return 0;
}
