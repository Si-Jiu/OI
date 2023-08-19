#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int ArrarySum(short *a, short n) {
    int count = 0;
    for (short index = 0; index < n; index += 1) {
        count += a[index];
    }

    return count;
}

int main() {
    short n, k;
    scanf("%hd %hd", &n, &k);
    short a[n], b[n], aIndex = 0, bIndex = 0;
    for (short i = 1; i <= n; i += 1) {
        if (i % k == 0) {
            a[aIndex] = i;
            aIndex += 1;
        } else {
            b[bIndex] = i;
            bIndex += 1;
        }
    }
    printf("%.1f %.1f", ArrarySum(a, aIndex) * 1.0 / aIndex,
           ArrarySum(b, bIndex) * 1.0 / bIndex);

    return 0;
}
