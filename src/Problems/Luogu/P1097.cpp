#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, temp;
    map<long long, long long> nums;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> temp;
        nums[temp]++;
    }
    for (auto p : nums)
        cout << p.first << ' ' << p.second << endl;

    return 0;
}
