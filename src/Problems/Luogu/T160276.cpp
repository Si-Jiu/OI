#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

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
