#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
        cout << "Equal" << endl;
    else
        cout << max(a, b) << endl;

    return 0;
}
