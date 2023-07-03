#include <iostream>

using namespace std;

int num[1000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (num[i] + num[j] > num[k] && num[i] + num[k] > num[j] &&
                    num[j] + num[k] > num[i])
                    ans++;
    cout << ans;

    return 0;
}
