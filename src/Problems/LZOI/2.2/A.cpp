#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    double n, m;
    cin >> n >> m;
    printf("边长=%.2lf\n", (n + m) * 2.0 / 4);
    printf("面积=%.2lf", pow((n + m) * 2.0 / 4, 2));

    return 0;
}
