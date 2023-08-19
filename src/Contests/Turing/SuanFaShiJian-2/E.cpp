#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct man {
    string job, name;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    queue<man> wait;
    for (int i = 0; i < n; i++) {
        man tmp;
        cin >> tmp.job >> tmp.name;
        wait.push(tmp);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string needJob;
        cin >> needJob;
        int size = wait.size();
        bool flag = false;
        for (int j = 0; j < size; j++) {
            if (wait.front().job == needJob) {
                cout << wait.front().name << endl;
                flag = true;
                wait.pop();
                break;
            } else {
                wait.push(wait.front());
                wait.pop();
            }
        }
        if (!flag)
            cout << "none" << endl;
    }

    return 0;
}
