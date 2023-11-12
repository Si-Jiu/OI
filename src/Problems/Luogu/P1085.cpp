#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main() {
    int mostUnhappy = 0, mostUnhappyDay = 0;
    for (int i = 0; i < 7; i++) {
        int a, b;
        cin >> a >> b;
        if (a + b > 8)
            if (a + b > mostUnhappy) {
                mostUnhappy = a + b;
                mostUnhappyDay = i + 1;
            }
    }
    cout << mostUnhappyDay << endl;

    return 0;
}
