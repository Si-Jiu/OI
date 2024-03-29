#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int bubble_sort(unsigned short data[], short n) {
    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (data[j] > data[i])
                count++;

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    unsigned short n;
    cin >> n;
    unsigned short nums[n];
    for (unsigned short i = 0; i < n; i++)
        cin >> nums[i];
    cout << bubble_sort(nums, n);

    return 0;
}
