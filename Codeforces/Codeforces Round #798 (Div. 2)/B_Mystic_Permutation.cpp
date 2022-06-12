#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> a;
        a = v;
        sort(a.begin(), a.end());
        bool ok = true;
        if (n == 1)
            ok = false;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == v[i])
                {
                    if (i == 0)
                    {
                        int t = a[0];
                        a[0] = a[1];
                        a[1] = t;
                    }
                    else if (i == n - 1)
                    {
                        int t = a[n - 1];
                        a[n - 1] = a[n - 2];
                        a[n - 2] = t;
                    }
                    else
                    {
                        int t = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = t;
                    }
                }
            }
        }
        if (ok)
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
        }
        else
            cout << -1 << endl;
        cout << endl;
    }
    return 0;
}