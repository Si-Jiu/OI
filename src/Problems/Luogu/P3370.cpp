#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    string temp;
    map<string, long long> strings;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> temp;
        strings[temp]++;
    }
    cout << strings.size();

    return 0;
}
