#include <bits/stdc++.h>

using namespace std;

int main()
{
    short r;
    cin >> r;
    if (r < 0)
        cout << "It's not a circle!" << endl;
    else
        printf("The area of the circle is %.3f", 3.1415926 * pow(r, 2));

    return 0;
}
