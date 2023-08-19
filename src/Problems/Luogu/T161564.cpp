#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

vector<char> word;
string origin;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> origin;
    for (short i = 0; i < origin.length(); i++)
        if (origin[i] == '*')
            word.pop_back();
        else
            word.push_back(origin[i]);
    for (short i = 0; i < word.size(); i++)
        cout << word[i];

    return 0;
}
