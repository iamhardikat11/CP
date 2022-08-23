#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, a, b, c, d, l, j;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int i = 0;
    while (l < m)
    {
        for (j = i; j < n; j++)
        {
            if (a < arr[j])
                a = arr[j];
            if (arr[j] < 0)
            {
                cout << a;
                break;
            }
        }
        i = j + 1;
        {
            for (int k = i; k < n; k++)
            {
                if (a < arr[k])
                    a = arr[k];
                if (arr[k] > 0)
                {
                    cout << a;
                    i = k + 1;
                    break;
                }
            }
        }
        l++;
    }
}