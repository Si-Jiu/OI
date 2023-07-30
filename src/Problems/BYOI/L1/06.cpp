#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a <= 10)
        printf("%.2lf", 2.5);
    else
        printf("%.2lf", 2.5 + (a - 10) * 1.5);

    return 0;
}
