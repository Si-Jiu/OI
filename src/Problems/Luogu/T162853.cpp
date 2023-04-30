#include <bits/stdc++.h>

using namespace std;

stack<char> homework;
string a;

int main()
{
    cin >> a;
    homework.push(a[0]);
    for (int i = 1; i < a.size(); i++)
    {
        if (!homework.empty())
            if (homework.top() == a[i])
                homework.pop();
            else
                homework.push(a[i]);
        else
            homework.push(a[i]);
    }
    vector<char> temp;
    while (!homework.empty())
    {
        temp.push_back(homework.top());
        homework.pop();
    }
    for (int i = temp.size() - 1; i >= 0; i--)
        cout << temp[i];

    return 0;
}
