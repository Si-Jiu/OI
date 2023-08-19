#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string verse;
    int occurrences[26] = {};
    getline(cin, verse);
    for (short index = 0; index < verse.length(); index++) {
        if ('a' <= verse[index] && verse[index] <= 'z')
            occurrences[verse[index] - 'a']++;
        if ('A' <= verse[index] && verse[index] <= 'Z')
            occurrences[verse[index] - 'A']++;
    }
    for (short index = 0; index < 26; index++)
        if (occurrences[index] != 0)
            cout << char(index + 'a') << ' ' << occurrences[index] << endl;

    return 0;
}
