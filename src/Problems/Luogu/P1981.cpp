#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    s += "+";
    unsigned long long num = 0;
    bool flag = false;
    stack<unsigned long long> stk;
    for (unsigned long long i = 0; i < s.size(); i++) {
        if (s[i] == '*') {
            stk.push(num % 10000);
            num = 0;
            if (flag) {
                unsigned long long b = stk.top();
                stk.pop();
                unsigned long long a = stk.top();
                stk.pop();
                stk.push(a * b % 10000);
                flag = true;
            } else
                flag = true;
        } else if (s[i] == '+') {
            stk.push(num % 10000);
            num = 0;
            if (flag) {
                unsigned long long b = stk.top();
                stk.pop();
                unsigned long long a = stk.top();
                stk.pop();
                stk.push(a * b % 10000);
                flag = false;
            }
        } else {
            num = num * 10 + (s[i] - '0');
            num %= 10000;
        }
    }
    unsigned long long sum = 0;
    while (!stk.empty()) {
        sum += stk.top();
        sum %= 10000;
        stk.pop();
    }
    cout << sum << endl;

    return 0;
}
