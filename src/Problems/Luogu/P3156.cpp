#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long id[n];
    int a[m];
    for (short i = 0; i < n; i += 1)
        scanf("%lld", &id[i]);
    for (short i = 0; i < m; i += 1)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i += 1)
        printf("%lld\n", id[a[i] - 1]);

    return 0;
}
