#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == target)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
