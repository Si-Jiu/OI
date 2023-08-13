#include <bits/stdc++.h>

using namespace std;

int a[100000], b[100000];
bool cntA1[1000000000 + 10], cntB1[1000000000 + 10];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    bool flag = true;
    int cntA = 0, cntB = 0;
    for (int i = 0; i < n; i++) {
        if (!cntA1[a[i]]) {
            cntA++;
            cntA1[a[i]] = 1;
        }
        if (!cntB1[b[i]]) {
            cntB++;
            cntB1[b[i]] = 1;
        }
        for (int j = 1; j < n; j++) {
            if (a[i] == a[j] && b[i] != b[j])
                flag = false;
            else if (a[i] != a[j] && b[i] == b[j])
                flag = false;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    cout << cntA << ' ' << cntB << endl;

    return 0;
}
