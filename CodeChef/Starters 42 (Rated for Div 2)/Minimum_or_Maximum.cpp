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
        for (int i = 0; i < n; ++i) cin >> v[i];
        vector<int> a;
        a = v;
        sort(a.begin(), a.end());
        vector<int> b;
        b = a;
        sort(b.begin(), b.end(), greater<int>());
        if(v==a || v==b)
            cout << "YES" << endl;
        else 
        {
            int flag = 1;
            int mn = v[0];
            int mx = v[0];
            for(int i=1;i<n;i++)
            {
                if(v[i]>=mx)
                {
                        mx = max(v[i],mx);
                        continue;
                }
                else if(v[i]<=mn)
                {
                        mn = v[i];
                        continue;
                }
                else
                {
                    flag =0;
                    break;
                }
            }
            if(flag)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}