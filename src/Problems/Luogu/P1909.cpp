#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int n, cheapest = INT_MAX;
    cin >> n;
    for (int i = 0; i < 3; i++) {
        int num, money;
        cin >> num >> money;
        if (ceil(n * 1.0 / num) * money < cheapest)
            cheapest = ceil(n * 1.0 / num) * money;
    }
    cout << cheapest << endl;

    return 0;
}
