#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> stk;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            stk.push(i);
        else {
            cout << stk.top() << ' ' << i << endl;
            stk.pop();
        }
    }

    return 0;
}
