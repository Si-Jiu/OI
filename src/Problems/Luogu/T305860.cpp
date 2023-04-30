#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n], q[m];
    for (int index = 0; index < n; index++)
        cin >> arr[index];
    for (int index = 0; index < m; index++)
        cin >> q[index];
    for (int index = 0; index < m; index++)
        cout << lower_bound(arr, arr + n, q[index]) + 1 - arr << ' ';

    return 0;
}
