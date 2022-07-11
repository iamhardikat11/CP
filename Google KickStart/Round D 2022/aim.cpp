#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll t;
    cin >> t;
    for(ll test=1;test<=t;test++)
    {
        ll n,m,k, cnt=0;
        cin >> n >> m >> k;
        ll arr[n+1];
        while(m--)
        {
            ll u,v;
            cin >> u >> v;
            arr[v] = 1;
        }
        for(ll i=1;i<=n;i++)
        {
            if(arr[i]==1)
             cnt++;
        }
        cout << "Case #" << test << ": " << cnt << "\n";
    }
}
int main()
{
    solve();
    return 0;
}