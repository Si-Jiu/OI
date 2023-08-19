#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, q;
    string temp;
    cin >> n >> q;
    map<string, long long> words;
    for (long long i = 0; i < n; i++) {
        cin >> temp;
        words[temp]++;
    }
    for (long long i = 0; i < q; i++) {
        cin >> temp;
        cout << words[temp] << endl;
    }

    return 0;
}
