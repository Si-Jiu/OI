#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    if (a.length() != b.length())
        cout << 1 << endl;
    else if (a.length() == b.length())
    {
        bool flag1 = true;
        for (short i = 0; i < a.length(); i++)
            if (a[i] != b[i])
            {
                flag1 = false;
                break;
            }
        if (flag1)
        {
            cout << 2 << endl;
            return 0;
        }
        bool flag2 = true;
        for (short i = 0; i < a.length(); i++)
            if ((char)tolower(a[i]) == (char)tolower(b[i]))
            {
                flag2 = false;
                break;
            }
        if (flag2)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
    return 0;
}
