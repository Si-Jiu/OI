#include <bits/stdc++.h>

using namespace std;

short x, y, n;
double minMoney;

int main() {
    cin >> x >> y;
    cin >> n;
    minMoney = x * 1.0 / y;
    for (short i = 0; i < n; i++) {
        cin >> x >> y;
        if (x * 1.0 / y < minMoney)
            minMoney = x * 1.0 / y;
    }
    printf("%.2f", minMoney * 1000);

    return 0;
}
