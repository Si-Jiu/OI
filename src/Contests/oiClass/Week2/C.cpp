#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int score, target, time, rtime;
        cin >> score >> target >> time >> rtime;
        while (score > target)
            score /= 10;
        if (rtime > time)
            cout << "Time Limit Exceeded" << endl;
        else if (score < target)
            cout << "Wrong Answer" << endl;
        else
            cout << "Accepted" << endl;
    }

    return 0;
}
