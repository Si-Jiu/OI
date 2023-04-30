#include <bits/stdc++.h>

using namespace std;

long long n, tmp;
vector<long long> s;

int main()
{
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> tmp;
        s.push_back(tmp);
    }
    sort(s.begin(), s.end());
    tmp = 0;
    for (long long i = 1; i < s.size() - 1; i++)
        tmp += s[i];
    printf("%.2f", tmp * 1.0 / (s.size() - 2));

    return 0;
}
