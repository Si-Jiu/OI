#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int a[100][100];

void dfs(int curX, int curY, int lim) {
    
}

int main() {
    for (int i = 1; i <= 100; i++) {
        for (int x = 0; x < i; x++)
            for (int y = 0; y < i; y++) {
                for (int j = 0; j < 10; j++) {
                    a[x][y] = j;
                }
            }
    }

    return 0;
}
