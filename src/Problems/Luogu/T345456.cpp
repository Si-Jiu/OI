#include <bits/stdc++.h>

using namespace std;

int cnt[1000000] = {};

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    queue<int> quKuai;
    long long sum = 0, maxSum = 0;
    for (int i = 0; i < n; i++) {
        quKuai.push(a[i]);
        sum++;
        cnt[a[i]]++;
        while (cnt[a[i]] > 1) {
            sum--;
            cnt[quKuai.front()]--;
            quKuai.pop();
        }
        maxSum = max(sum, maxSum);
    }
    cout << maxSum << endl;

    return 0;
}
