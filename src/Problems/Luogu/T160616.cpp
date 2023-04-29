#include <bits/stdc++.h>
#define short long long // OI千万题，longlong第一题，类型不规范，RE两行泪
#define llong long long
#define float double

using namespace std;

queue<short> visitor;
short op;
llong sum, n;

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> op;
            sum += op;
            visitor.push(op);
        }
        else if (op == 2 && !visitor.empty())
        {
            sum -= visitor.front();
            visitor.pop();
        }
        else
        {
            if (visitor.empty())
                cout << "none" << endl;
            else
                printf("%.2f\n", sum * 1.0 / visitor.size());
        }
    }

    return 0;
}
