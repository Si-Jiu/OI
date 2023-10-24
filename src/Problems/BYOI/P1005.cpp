#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long a[] = {8,         16,        32,         64,         128,
                 256,       512,       1024,       2048,       4096,
                 8192,      16384,     32768,      65536,      131072,
                 262144,    524288,    1048576,    2097152,    4194304,
                 8388608,   16777216,  33554432,   67108864,   134217728,
                 268435456, 536870912, 1073741824, 2147483648, 4294967296};

int main() {
    long long n;
    scanf("%lld", &n);
    long long b = n - a[0];
    for (int i = 1; i < 30; i++) {
        if (b <= abs(a[i] - n)) {
            printf("%lld\n", a[i - 1]);
            break;
        }
        b = abs(a[i] - n);
    }

    return 0;
}
