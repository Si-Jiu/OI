#include <bits/stdc++.h>
#define endl '\n'

bool comp(const unsigned int &a, const unsigned int &b) {
    return a > b;
}

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    unsigned arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
