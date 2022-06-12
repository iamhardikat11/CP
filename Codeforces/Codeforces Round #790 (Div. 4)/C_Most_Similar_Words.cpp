#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<string> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int tot = 0;
            for(int j=i+1;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                    int r = abs(a[i][k]-a[j][k]);
                    tot+=r;
                }
                mn = min(mn,tot);
            }
        }
        cout << mn << endl;
    }
    return 0;
}