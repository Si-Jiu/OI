#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int a;
    cin >> a;
    int i = 1;
    for (; a != 1; i++)
        a /= 2;
    cout << i << endl;

    return 0;
}
