#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, temp;
    map<long long, long long> nums;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> temp;
        nums[temp]++;
    }
    for (auto p : nums)
        cout << p.first << ' ' << p.second << endl;

    return 0;
}
