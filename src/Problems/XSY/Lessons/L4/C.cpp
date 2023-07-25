#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2.0;
    printf("%.3lf", sqrt(p * (p - a) * (p - b) * (p - c)));

    return 0;
}
