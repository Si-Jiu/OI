#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    queue<bool> fav;
    queue<int> no;
    for (int i = 0; i < n; i++) {
        bool tmp;
        cin >> tmp;
        fav.push(tmp);
        no.push(i + 1);
    }
    bool null = true;
    for (int i = 0; i < n; i++) {
        bool have = false;
        int tmp;
        cin >> tmp;
        int size = fav.size();
        for (int j = 0; j < size && !fav.empty(); j++) {
            if (fav.front() == tmp) {
                cout << no.front() << ' ';
                fav.pop();
                no.pop();
                have = true;
                null = false;
                break;
            } else {
                fav.push(fav.front());
                fav.pop();
                no.push(no.front());
                no.pop();
            }
        }
        if (have)
            continue;
        else
            break;
    }
    if (null)
        cout << "NULL" << endl;

    return 0;
}
