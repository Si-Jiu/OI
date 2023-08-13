#include <bits/stdc++.h>

using namespace std;

int main() {
    double x;
    cin >> x;
    printf("%.2lf\n", x > 40 ? (1.8 + 0.2) * 40 + (x - 40) * (2.2 + 0.2)
                             : x * (1.8 + 0.2));

    return 0;
}
