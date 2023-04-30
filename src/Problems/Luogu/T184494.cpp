#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> scores;
    int n;
    char o;
    cin >> n;
    while (n--)
    {
        cin >> o;
        if (o == 'I')
        {
            int addScore;
            cin >> addScore;
            scores.push(addScore);
        }
        else if (scores.empty())
            cout << -1 << endl;
        else
        {
            cout << scores.top() << endl;
            scores.pop();
        }
    }

    return 0;
}
