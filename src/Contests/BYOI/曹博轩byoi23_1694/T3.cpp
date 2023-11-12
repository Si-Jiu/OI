#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[100000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++) {
            int zz = a[i] - a[j];
            if (abs(zz) > 1)
                sum += zz;
        }
    cout << sum << endl;

    return 0;
}
