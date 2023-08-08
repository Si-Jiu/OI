#include <bits/stdc++.h>

using namespace std;

int main() {
    short n;
    cin >> n;
    vector<int> jishu;
    int tmp;
    for (short i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp % 2 != 0)
            jishu.push_back(tmp);
    }
    sort(jishu.begin(), jishu.end());
    if (jishu.size() == 0) {
        cout << "NULL" << endl;
        return 0;
    }
    for (short i = 0; i < jishu.size(); i++)
        cout << jishu[i] << ' ';
    cout << endl;

    return 0;
}
