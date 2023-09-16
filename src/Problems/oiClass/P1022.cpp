#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 2; i <= n; i += 2)
        sum += (1.0 / (i - 1) - 1.0 / i);
    printf("%.8lf", sum);

    return 0;
}
