#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        stack<unsigned long long> stk;
        for (int j = 0; j < n; j++) {
            string o;
            cin >> o;
            if (o == "push") {
                unsigned long long x;
                cin >> x;
                stk.push(x);
            } else if (o == "pop") {
                if (stk.empty())
                    cout << "Empty" << endl;
                else
                    stk.pop();
            } else if (o == "query") {
                if (stk.empty())
                    cout << "Anguei!" << endl;
                else
                    cout << stk.top() << endl;
            } else
                cout << stk.size() << endl;
        }
    }

    return 0;
}
