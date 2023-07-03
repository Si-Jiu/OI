#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 6)
        cout << "*0";
    int prefect[n - 6], cnt = 1;
    prefect[0] = 6;
    for (int i = 28; i < n; i++) {
        int temp[i], index = 0, sum = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0) {
                temp[index] = j;
                index++;
            }
        for (int j = 0; j < index; j++)
            sum += temp[j];
        if (sum == i) {
            prefect[cnt] = i;
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++)
        cout << prefect[i] << endl;
    cout << '*' << cnt;

    return 0;
}
