#include <bits/stdc++.h>

using namespace std;

int main()
{
    double xA, xB, yA, yB;
    cin >> xA >> yA;
    cin >> xB >> yB;
    printf("%.3f", sqrt(pow(xA - xB, 2) + pow(yA - yB, 2)));

    return 0;
}
