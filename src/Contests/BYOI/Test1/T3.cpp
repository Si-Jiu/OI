#include <bits/stdc++.h>

using namespace std;

int main() {
    short t;
    cin >> t;
    short x, y;
    cin >> x >> y;
    if (t == 1)
        printf("%.2lf", (double)x + y);
    else if (t == 2)
        printf("%.2lf", (double)x - y);
    else if (t == 3)
        printf("%.2lf", (double)x * y);
    else if (t == 4)
        printf("%.2lf", (double)x * 1.0 / y);

    return 0;
}
