#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int> scores;
    int n;
    char o;
    cin >> n;
    while (n--) {
        cin >> o;
        if (o == 'I') {
            int addScore;
            cin >> addScore;
            scores.push(addScore);
        } else if (scores.empty())
            cout << -1 << endl;
        else {
            cout << scores.top() << endl;
            scores.pop();
        }
    }

    return 0;
}
