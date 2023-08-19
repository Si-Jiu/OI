#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    deque<int> section;
    unsigned long long cntL = 0, sum = 0, maxSum = 0, minL = n + 10,
                       minR = n + 10;
    for (unsigned long long i = 0; i < n; i++) {
        section.push_back(a[i]);
        sum += a[i];
        while (sum > m) {
            cntL++;
            sum -= section.front();
            section.pop_front();
        }
        if (sum > maxSum) {
            minL = cntL;
            minR = i;
            maxSum = sum;
        }
    }
    cout << minL + 1 << ' ' << minR + 1 << ' ' << maxSum << endl;

    return 0;
}
