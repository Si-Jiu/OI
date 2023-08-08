#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    stack<int> stk;
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a + b);
        } else if (s[i] == '-') {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a - b);
        } else if (s[i] == '*') {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a * b);
        } else if (s[i] == '/') {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            stk.push(a / b);
        } else if (s[i] == '@')
            break;
        else if (s[i] == '.') {
            stk.push(num);
            num = 0;
        } else
            num = num * 10 + (s[i] - '0');
    }
    cout << stk.top() << endl;

    return 0;
}
