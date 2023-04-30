#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n;
    long long sum = 1;
    cin >> n;
    n++;
    short countries[n][3];
    for (short i = 0; i < n; i++)
        cin >> countries[i][0] >> countries[i][1] >> countries[i][2];
    for (short i = 0; i < n; i++)
        sum *= countries[i][0] + countries[i][1] + countries[i][2];
    cout << sum;

    return 0;
}
