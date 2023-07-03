#include <bits/stdc++.h>

using namespace std;

stack<bool> a;

int main() {
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
