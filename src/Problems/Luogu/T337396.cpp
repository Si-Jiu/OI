#include <bits/stdc++.h>

using namespace std;

map<int, int> cnt;
int note[100000];
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        note[i] = tmp;
        cnt[tmp]++;
    }
    for (int i = 0; i < n; i++)
        if (cnt[note[i]] >= 2) {
            cout << note[i] << ' ';
            cnt[note[i]] = -1;
        }
    cout << endl;

    return 0;
}
