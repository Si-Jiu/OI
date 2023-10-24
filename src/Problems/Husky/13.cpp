#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> a;
    int n;
    cin >> n;
    a.push(n);
    cin >> n;
    a.push(n);
    cin >> n;
    a.push(n);
    cout << a.top() << ' ';
    a.pop();
    cout << a.top() << ' ';
    a.pop();
    cout << a.top() << ' ';
    a.pop();
    cout << endl;

    return 0;
}
