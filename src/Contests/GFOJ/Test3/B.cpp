#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    bool a[n];
    map<int, int> cnt1;
    int max1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        max1 += a[i];
    }
    cnt1[max1]++;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int cnt = 0;
            for (int k = 0; k < i; k++)
                cnt += a[k];
            for (int k = i; k <= j; k++)
                cnt += !a[k];
            for (int k = j + 1; k < n; k++)
                cnt += a[k];
            cnt1[cnt]++;
        }
    }
    cout << cnt1.size() << endl;

    return 0;
}
