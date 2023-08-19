#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct num {
    long long value, pos;
    bool operator<(const num &a) const {
        return value < a.value;
    }
};

long long n, ans[1000000];
num nums[1000000];

bool comp(const num &a, const num &b) {
    if (a.value == b.value)
        return a.pos < b.pos;
    return a.value < b.value;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> nums[i].value;
        nums[i].pos = i + 1;
    }
    sort(nums, nums + n, comp);
    for (long long i = 0; i < n; i++) {
        long long pos2 = upper_bound(nums, nums + n, nums[i]) - nums;
        if (pos2 < n)
            ans[nums[i].pos] = nums[pos2].pos;
        else
            ans[nums[i].pos] = -1;
    }
    for (long long i = 1; i <= n; i++)
        cout << ans[i] << ' ';

    return 0;
}
