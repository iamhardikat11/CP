#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];
        int cnt=0;
        for(int i=1;i<=n-k;i++)
        {
            if(log2((double)a[i]/(double)a[i+k])<(k)) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}