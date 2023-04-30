#include <bits/stdc++.h>

using namespace std;

int main()
{
    string verse;
    int occurrences[26] = {};
    getline(cin, verse);
    for (short index = 0; index < verse.length(); index++)
    {
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
