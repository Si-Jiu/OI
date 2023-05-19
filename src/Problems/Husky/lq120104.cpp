#include <bits/stdc++.h>

using namespace std;

bool isPrime(short num)
{
    if (num <= 2)
        return true;
    for (short i = 2; i <= sqrt(num) + 1; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    short n, cnt = 0;
    cin >> n;
    for (short i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            string string_i = to_string(i);
            reverse(string_i.begin(), string_i.end());
            if (isPrime(stoi(string_i)))
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}
