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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        if (n == 1 && a[0]>=b[0])
            cout << "YES" << endl;
        else
        {
            vector<int> c(n, 0);
            for (int i = 0; i < n; i++)
                c[i] = a[i] - b[i];
            int flag = 1;
            int mx = 0;
            for (int i = 0; i < n; i++)
            {
                if (c[i] < 0)
                {
                    cout << "NO" << endl;
                    flag = 0;
                    break;
                }
                else
                    mx = max(mx, c[i]);
            }
            if (flag)
            {
                for (int i = 0; i < n; i++)
                {
                    if (mx != c[i])
                    {
                        if (b[i] != 0)
                        {
                            cout << "NO" << endl;
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (flag)
                cout << "YES" << endl;
        }
    }
    return 0;
}