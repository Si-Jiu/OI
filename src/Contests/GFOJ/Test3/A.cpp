#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            for (int c = 1; c <= n; c++)
                for (int d = 1; d <= n; d++)
                    if (a + b - c - d == k)
                        cnt++;
    cout << cnt << endl;

    return 0;
}
