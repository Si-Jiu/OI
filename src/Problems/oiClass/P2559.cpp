#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long score[100 + 10];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
        cin >> score[i];
    long long m;
    cin >> m;
    sort(score, score + n);
    long long rank = 1, tmp = 0;
    for (long long i = n - 1; i >= 0; i--) {
        if (i != n - 1 && score[i] < score[i + 1]) {
            rank += tmp;
            tmp = 1;
        } else
            tmp++;
        if (score[i] == m)
            break;
    }
    cout << rank << endl;

    return 0;
}
