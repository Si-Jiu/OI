#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int arr[100 + 10][100 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;
    if (t == 1)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[j][i];
    else
        for (int i = n - 1; i >= 0; i--)
            for (int j = n - 1; j >= 0; j--)
                cin >> arr[j][i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
