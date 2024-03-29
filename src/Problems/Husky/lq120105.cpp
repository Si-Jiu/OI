#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int cnt = 0;

void selection_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        int min = i;
        for (int j = i + 1; j < len; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(arr[i], arr[min]);
        cnt++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    selection_sort(a, n);
    cout << cnt << endl;

    return 0;
}
