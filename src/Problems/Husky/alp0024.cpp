#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += 1.0 / i;
    printf("%.2f", cnt);

    return 0;
}
