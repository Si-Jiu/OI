#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> cat, dog;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string o;
        cin >> o;
        if (o == "InCat") {
            int x;
            cin >> x;
            cat.push(x);
        } else if (o == "InDog") {
            int x;
            cin >> x;
            dog.push(x);
        } else if (o == "OutCat") {
            if (cat.empty())
                cout << -1 << endl;
            else {
                cout << cat.front() << endl;
                cat.pop();
            }
        } else {
            if (dog.empty())
                cout << -1 << endl;
            else {
                cout << dog.front() << endl;
                dog.pop();
            }
        }
    }

    return 0;
}
