#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int binary_search(unsigned int arr[], unsigned short len, unsigned int key) {
    int left = 0, right = len;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned short n;
    cin >> n;
    unsigned int a[n], x;
    for (unsigned short index = 0; index < n; index++)
        cin >> a[index];
    cin >> x;
    int ans = binary_search(a, n, x);
    if (ans != -1)
        cout << ans + 1;
    else
        cout << -1;

    return 0;
}
