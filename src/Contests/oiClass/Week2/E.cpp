#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int maxX = -1, minX = 100001, maxY = -1, minY = 100001;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a > maxX)
            maxX = a;
        if (a < minX)
            minX = a;
        if (b > maxY)
            maxY = b;
        if (b < minY)
            minY = b;
    }
    cout << (maxX - minX) * (maxY - minY) << endl;

    return 0;
}
