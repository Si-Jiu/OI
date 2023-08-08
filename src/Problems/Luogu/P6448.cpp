#include <bits/stdc++.h>

using namespace std;

const short N = 5;

void bubble_sort(short arr[], short len) {
    bool changed = true;
    while (changed) {
        changed = false;
        for (int i = 0; i < len - 1; i++)
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                changed = true;
                for (short i = 0; i < 5; i++)
                    cout << arr[i] << ' ';
                cout << endl;
            }
    }
}

int main() {
    short a[N];
    for (short i = 0; i < 5; i++)
        cin >> a[i];
    bubble_sort(a, N);

    return 0;
}
