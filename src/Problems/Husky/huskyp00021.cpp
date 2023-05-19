#include <bits/stdc++.h>

using namespace std;

int main()
{
    short k;
    cin >> k;
    for (short i = 0; i < k; i++)
    {
        for (short j = 0; j < i; j++)
            cout << ' ';
        cout << '@' << endl;
    }

    return 0;
}
