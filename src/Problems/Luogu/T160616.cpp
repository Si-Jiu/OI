#include <bits/stdc++.h>

using namespace std;

queue<short> visitor;
short op;
long long sum, n;

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
