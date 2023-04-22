#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q;
    string temp;
    cin >> n >> q;
    map<string, long long> words;
    for (long long i = 0; i < n; i++)
    {
        cin >> temp;
        words[temp]++;
    }
    for (long long i = 0; i < q; i++)
    {
        cin >> temp;
        cout << words[temp] << endl;
    }

    return 0;
}
