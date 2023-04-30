#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int len)
{
    cout << arr[0] << ' ';
    for (int i = 1; i < len; i++)
    {
        int pickUp = arr[i];
        int j = i - 1;
        while ((j >= 0) && (pickUp < arr[j]))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = pickUp;
        cout << arr[int(ceil(i / 2))] << ' ';
    }
}

int main()
{
    short n;
    cin >> n;
    int data[10000];
    for (short i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    insertion_sort(data, n);

    return 0;
}
