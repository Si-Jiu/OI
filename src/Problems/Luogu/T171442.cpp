#include <bits/stdc++.h>
#define short long long // IO千万题，longlong第一题，类型不规范，RE两行泪
#define llong long long
#define float double

using namespace std;

deque<int> students = {0, 1};
int n;
char op;

int main()
{
    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == 'A')
        {
            int tmp;
            cin >> tmp;
            students.push_back(tmp);
        }
        else if (op == 'B')
        {
            cout << students.front() << endl;
            students.pop_front();
        }
        else
            students.pop_back();
    }

    return 0;
}
