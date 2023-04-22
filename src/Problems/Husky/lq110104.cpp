#include <bits/stdc++.h>

using namespace std;

int main()
{
    string choose, key = "DCBAD";
    short score = 0;
    cin >> choose;
    for (short i = 0; i < 5; i++)
        if (choose[i] == key[i])
            score += 30;
    cout << score;

    return 0;
}
