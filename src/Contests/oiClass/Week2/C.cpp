#include <bits/stdc++.h>

using namespace std;

int main() {
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
