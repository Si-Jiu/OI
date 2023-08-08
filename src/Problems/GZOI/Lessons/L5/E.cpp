#include <bits/stdc++.h>

using namespace std;

int main() {
    double x;
    cin >> x;
    if (0 < x && x < 100)
        printf("%.2lf", x + 1);
    else if (100 <= x && x < 200)
        printf("%.2lf", x - 1);
    else
        printf("%.2lf", -1);

    return 0;
}
