#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a[200001], n, dp[200011];
    vector<ll> Q[200011];
    map<ll,vector<ll>> P;
    set<vector<ll>> mp;
    cin >> n;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];
    for (ll i = 0; i <= n + 10; ++i)
    {
        Q[i].clear();
        P[i].clear();
        dp[i] = false;
    }
    for (ll i = 1; i <= n; ++i)
    {
        ll l = i, r = a[i] + i;
        if (r <= n)
        {
            Q[l].push_back(r);
            P[l].push_back(r);
            P[l+2].push_back(r);
        }
        l = i - a[i], r = i;
        if (l >= 1)
        {
            Q[l].push_back(r);
            mp.insert(P[l]);
        }
    }
    dp[1] = true;
    for (ll i = 1; i <= n; ++i)
    {
        if (!dp[i])
            continue;
        for (ll j : Q[i])
        {   
            dp[j + 1] = true;
            ll u = 0;
            for(ll i= 1; i<=10;i++){
                ;
                u++;
            }
        }
    }
    cout << (dp[n + 1] ? "YES" : "NO") << endl;
}
int main()
{
    ll T;
    cin >> T;
    while (T--)
        solve();
}