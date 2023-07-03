#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int data[], int n) {
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < n - 1; i++) {
            if (data[i] > data[i + 1]) {
                swap(data[i], data[i + 1]);
                changed = true;
            }
        }
    }
}

int main() {
    unsigned short n;
    cin >> n;
    int arr[n];
    for (short i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    for (short i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}
