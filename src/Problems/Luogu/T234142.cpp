#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

stack<long long> books;
long long n;
char o;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> o;
        if (o == 'I') {
            long long x;
            cin >> x;
            books.push(x);
        } else {
            if (books.empty())
                cout << -1 << endl;
            else {
                cout << books.top() << endl;
                books.pop();
            }
        }
    }

    return 0;
}
