#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    for (int j = 0; j < n; j++, cout << endl)
        for (int h = 0; h < n; h++, i++)
            printf("%02d", i);
    cout << endl;
    i = 1;
    for (int j = 0; j < n; j++, cout << endl) {
        for (int h = 0; h < n - j - 1; h++)
            cout << "  ";
        for (int h = 0; h < j + 1; h++, i++)
            printf("%02d", i);
    }
    cout << endl;

    return 0;
}
