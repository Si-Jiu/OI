#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, d, x;
    cin >> a >> b >> c >> d >> x;
    printf("%.3lf", a * pow(x, 3) + b * pow(x, 2) + c * x + d);

    return 0;
}
