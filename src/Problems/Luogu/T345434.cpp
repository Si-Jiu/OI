#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<string, string> words;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word1, word2;
        cin >> word1 >> word2;
        words[word2] = word1;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string word;
        cin >> word;
        if (words.count(word) == 0)
            cout << "eh" << endl;
        else
            cout << words[word] << endl;
    }

    return 0;
}
