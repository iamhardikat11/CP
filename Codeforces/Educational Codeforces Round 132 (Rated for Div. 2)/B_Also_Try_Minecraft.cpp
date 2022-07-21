#include <bits/stdc++.h>
using namespace std;
void solve()
{
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        int si, ti, ans = 0;
        cin >> si >> ti;
        if (si < ti)
        {
            for (int j = si; j < ti; j++)
            {
                if (arr[j] > arr[j + 1])
                    ans += (arr[j] - arr[j + 1]);
            }
        }
        else
        {
            for (int j = ti; j > si; j--)
            {
                if (arr[j] > arr[j - 1])
                    ans += (arr[j] - arr[j - 1]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}