#include <bits/stdc++.h>
#define short long long // IO千万题，longlong第一题，类型不规范，RE两行泪
#define llong long long
#define float double

using namespace std;

queue<llong> que;
llong n, op;

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> op;
            que.push(op);
        }
        else if (op == 2)
        {
            if (que.empty())
                cout << "ERR_CANNOT_POP" << endl;
            else
                que.pop();
        }
        else if (op == 3)
        {
            if (que.empty())
                cout << "ERR_CANNOT_QUERY" << endl;
            else
                cout << que.front() << endl;
        }
        else
            cout << que.size() << endl;
    }

    return 0;
}
