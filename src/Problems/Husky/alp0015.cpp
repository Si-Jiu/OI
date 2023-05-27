#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    cin >> x;
    if (x <= 5)
        printf("%.2f", x * 6);
    else if (5 < x && x <= 10)
        printf("%.2f", x * 5);
    else if (10 < x)
        printf("%.2f", x * 4);

    return 0;
}
