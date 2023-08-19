#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> minQ;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        minQ.push(tmp);
    }
    int sum = 0;
    while (minQ.size() > 1) {
        int a = minQ.top();
        minQ.pop();
        int b = minQ.top();
        minQ.pop();
        minQ.push(a + b);
        sum += a + b;
    }
    cout << sum << endl;

    return 0;
}
