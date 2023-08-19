#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool IsPrime(int num) {
    if (num == 1 || num == 4)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 6 != 1 && num % 6 != 5)
        return false;
    int temp = sqrt(num);
    for (int i = 5; i <= temp; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;

    return true;
}

int main() {
    short n;
    scanf("%hd", &n);
    int a[n];
    for (short index = 0; index < n; index += 1)
        scanf("%d", &a[index]);
    for (short index = 0; index < n; index += 1)
        if (IsPrime(a[index]))
            printf("%d ", a[index]);

    return 0;
}
