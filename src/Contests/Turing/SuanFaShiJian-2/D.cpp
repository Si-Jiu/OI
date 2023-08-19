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
        string s;
        cin >> s;
        stack<int> xiao, zhong;
        bool flag = true;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == '(')
                xiao.push(j);
            else if (s[j] == ')') {
                if (xiao.empty() || (!zhong.empty() && !xiao.empty() &&
                                     zhong.top() > xiao.top())) {
                    flag = false;
                    break;
                } else {
                    xiao.pop();
                }
            } else if (s[j] == '[')
                zhong.push(j);
            else {
                if (zhong.empty() || (!xiao.empty() && !zhong.empty() &&
                                      xiao.top() > zhong.top())) {
                    flag = false;
                    break;
                } else {
                    zhong.pop();
                }
            }
        }
        if (xiao.empty() && zhong.empty() && flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
