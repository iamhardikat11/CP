#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            for (int j = 0; j < m; j++)
                v[i][j] = a[j];
        }
    if(n==1 && m==1)
    {
        if(k==1 && v[0][0]=='.') cout << 1 << endl;
        else if(k==0 && v[0][0]=='*') cout << 1 << endl;
        else cout << 0 << endl;
        return 0;
    }
    else if (k > n && k > m)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m - k + 1; j++)
            {
                bool ok = true;
                for (int l = 0; l < k; l++)
                {
                    if (v[i][j + l] == '*')
                    {
                        ok = false;
                        break;
                    }
                }
                cnt += (ok) ? 1 : 0;
            }
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bool ok = true;
                for (int l = 0; l < k; l++)
                {
                    if (v[i + l][j] == '*')
                    {
                        ok = false;
                        break;
                    }
                }
                cnt += (ok) ? 1 : 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}