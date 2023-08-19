#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

stack<bool> a;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char tmp;
    do {
        cin >> tmp;
        if (tmp == '(')
            a.push(true);
        if (tmp == ')') {
            if (a.empty()) {
                cout << "NO";
                return 0;
            }
            a.pop();
        }
    } while (tmp != '@');
    cout << (a.empty() ? "YES" : "NO");

    return 0;
}
