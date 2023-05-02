#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n, k;
    cin >> n >> k;
    string words[n];
    for (short i = 0; i < n; i++)
        cin >> words[i];
    int cnt = 0;
    string line;
    for (short i = 0; i < n; i++)
    {
        if (cnt + words[i].length() > k)
        {
            cout << line.substr(0, line.length() - 1) << endl;
            line = "";
            cnt = 0;
        }
        line += words[i] + ' ';
        cnt += words[i].length();
    }
    cout << line.substr(0, line.length() - 1) << endl;
    return 0;
}
