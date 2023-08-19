#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

map<string, int> students;
map<int, int> scoreCnt;
int q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> q;
    for (int i = 0; i < q; i++) {
        char o;
        cin >> o;
        if (o == 'I') {
            string name;
            int score;
            cin >> name >> score;
            students[name] = score;
            scoreCnt[score]++;
        } else if (o == 'Q') {
            string name;
            cin >> name;
            if (students.count(name) == 0)
                cout << -1 << endl;
            else
                cout << students[name] << endl;
        } else {
            int y;
            cin >> y;
            cout << scoreCnt[y] << endl;
        }
    }
    return 0;
}
