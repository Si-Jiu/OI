#include <bits/stdc++.h>

using namespace std;

int main() {
    int father, mother;
    bool me;
    cin >> father >> mother >> me;
    if (me)
        cout << (father + mother + 13) / 2 << endl;
    else
        cout << (father + mother - 13) / 2 << endl;

    return 0;
}
