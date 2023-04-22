#include <bits/stdc++.h>
#define short long long
#define float double

using namespace std;

vector<char> word;
string origin;

int main()
{
    cin >> origin;
    for (short i = 0; i < origin.length(); i++)
    {
        if (origin[i] == '*')
            word.pop_back();
        else
            word.push_back(origin[i]);
    }
    for (short i = 0; i < word.size(); i++)
        cout << word[i];

    return 0;
}
