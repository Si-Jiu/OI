#include <bits/stdc++.h>
#define llong long long
#define float double
// IO千万题,longlong第一题,类型不规范,RE两行泪

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> parcel[n];
    for (int b = 0; b < q; b++)
    {
        short operation;
        cin >> operation;
        if (operation == 1)
        {
            int i, j, k;
            cin >> i >> j >> k;
            parcel[i].resize(j);
            parcel[i][j] = k;
        }
        else
        {
            int i, j;
            cin >> i >> j;
            cout << parcel[i][j] << endl;
        }
    }

    return 0;
}
