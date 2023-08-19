#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> lizi;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        lizi.push(tmp);
    }
    while (lizi.size() > 1) {
        int a = lizi.top();
        lizi.pop();
        int b = lizi.top();
        lizi.pop();
        if (a != b)
            lizi.push(abs(a - b));
    }
    if (lizi.empty())
        cout << 0 << endl;
    else
        cout << lizi.top() << endl;

    return 0;
}
