#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

map<string, int> students;
int q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> q;
    for (int i = 0; i < q; i++) {
        int o;
        cin >> o;
        if (o == 1) {
            string name;
            int score;
            cin >> name >> score;
            students[name] = score;
            cout << "OK" << endl;
        } else if (o == 2) {
            string name;
            cin >> name;
            if (students.count(name) == 0)
                cout << "Not found" << endl;
            else
                cout << students[name] << endl;
        } else if (o == 3) {
            string name;
            cin >> name;
            if (students.count(name) == 0)
                cout << "Not found" << endl;
            else {
                students.erase(name);
                cout << "Deleted successfully" << endl;
            }
        } else
            cout << students.size() << endl;
    }

    return 0;
}
