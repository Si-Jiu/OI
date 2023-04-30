#include <bits/stdc++.h>

using namespace std;

int main()
{
    short bits[32] = {};
    unsigned int a;
    short index = 0, position = 31;
    scanf("%d", &a);
    while (a != 0)
    {
        bits[index] = a % 2;
        a /= 2;
        index++;
    }
    index = 0;
    a = 0;
    while (position <= 0)
    {
        a += pow(bits[index], position);
        index++;
        position--;
    }
    printf("%d", a);

    return 0;
}
