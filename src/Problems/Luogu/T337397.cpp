#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        stack<char> stk;
        string s;
        cin >> s;
        bool flag = false;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'a')
                stk.push('a');
            else if (s[j] == 'b')
                stk.push('b');
            else {
                for (int k = 0; k < 2; k++) {
                    if (stk.empty()) {
                        cout << "NO" << endl;
                        flag = true;
                        break;
                    }
                    if (stk.top() == (k == 1 ? 'a' : 'b'))
                        stk.pop();
                    else {
                        cout << "NO" << endl;
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    break;
            }
        }
        if (!flag && stk.empty())
            cout << "YES" << endl;
        else if (!flag)
            cout << "NO" << endl;
    }

    return 0;
}
