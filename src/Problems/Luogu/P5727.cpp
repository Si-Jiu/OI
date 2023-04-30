#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<short> process;
    short n;
    scanf("%hd", &n);
    process.push_back(n);
    while (n != 1)
    {

        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
        process.push_back(n);
    }
    for (short i = process.size() - 1; i > -1; i -= 1)
    {
        printf("%hd ", process[i]);
    }

    return 0;
}
