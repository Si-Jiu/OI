#include <bits/stdc++.h>

using namespace std;

short a[505], b[505], c[505];

void read(short num[])
{
    memset(num, 0, 1010);
    string temp;
    cin >> temp;
    for (short i = 0, j = temp.length() - 1; i < temp.length(); i++, j--)
        num[j] = temp[i] - '0';
}

void add()
{
    memset(c, 0, 1010);
    for (int i = 0; i < 505; i++)
    {
        c[i] += a[i] + b[i];
        if (c[i] >= 10)
        {
            c[i + 1]++;
            c[i] -= 10;
        }
    }
}

void print()
{
    int pos = 504;
    while (pos > 0 && c[pos] == 0)
        pos--;
    for (int i = pos; i >= 0; i--)
        cout << c[i];
}

int main()
{
    read(a);
    read(b);
    add();
    print();

    return 0;
}
