#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    long long a[n];
    int find[m];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &find[i]);
    int out_index[m];
    memset(out_index, -1, sizeof(out_index));
    for (int i = 0; i < m; i++)
        if (binary_search(a, a + n, find[i]))
            out_index[i] = lower_bound(a, a + n, find[i]) - a + 1;
    for (int i = 0; i < m; i++)
        printf("%d ", out_index[i]);

    return 0;
}
