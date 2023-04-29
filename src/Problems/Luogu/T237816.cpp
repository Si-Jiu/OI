#include <bits/stdc++.h>
#define short long long // OI千万题,longlong第一题,类型不规范,RE两行泪
#define llong long long
#define float double

using namespace std;

int main()
{
    priority_queue<int> numbers;
    int n;
    cin >> n;
    while (n--)
    {
        int add;
        cin >> add;
        numbers.push(add);
    }
    while (numbers.size() > 1)
    {
        int tmp = numbers.top();
        numbers.pop();
        tmp -= numbers.top();
        numbers.pop();
        if (tmp != 0)
            numbers.push(tmp);
    }

    return 0;
}
