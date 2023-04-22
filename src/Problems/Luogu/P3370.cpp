#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    string temp;
    map<string, long long> strings;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> temp;
        strings[temp]++;
    }
    cout << strings.size();

    return 0;
}
