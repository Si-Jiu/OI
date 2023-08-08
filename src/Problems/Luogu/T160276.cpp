#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> stk;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            stk.push(i);
        else {
            if (stk.empty())
                cnt++;
            else
                stk.pop();
        }
    }
    cnt += stk.size();
    cout << cnt << endl;

    return 0;
}
