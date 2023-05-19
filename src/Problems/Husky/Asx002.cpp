#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        cout << a * c << endl;
    else if (a == b)
        cout << c << endl;
    else if (a < b)
        cout << b * c << endl;

    return 0;
}
