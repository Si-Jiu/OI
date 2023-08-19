#include <bits/stdc++.h>
#define endl '\n'
#define endl '\n'

using namespace std;

unsigned int h[100000 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    int maxH = 0;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        if (h[i] > maxH)
            maxH = h[i];
    }
    sort(h, h + n);
    for (int i = 0; i < q; i++) {
        unsigned long long m;
        cin >> m;
        unsigned long long sum = 0;
        int j = maxH - 1;
        for (; j >= 0; j--) {
            int many = n - (upper_bound(h, h + n, j) - h);
            if (many != n)
                sum += many;
            if (sum == m)
                break;
        }
        cout << j << endl;
    }

    return 0;
}
