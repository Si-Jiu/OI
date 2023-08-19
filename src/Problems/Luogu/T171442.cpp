#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

deque<int> students = {0, 1};
int n;
char op;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> op;
        if (op == 'A') {
            int tmp;
            cin >> tmp;
            students.push_back(tmp);
        } else if (op == 'B') {
            cout << students.front() << endl;
            students.pop_front();
        } else
            students.pop_back();
    }

    return 0;
}
