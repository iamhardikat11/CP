#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    if(a==0ll) return b;
    return gcd(b%a,a);
}
int main()
{
    ll n;
    cin >> n;
    vector<pair<ll,ll> > v(n);
    map<pair<ll,ll>,ll> m;
    for(ll i=0;i<n;i++) {
        cin >> v[i].first >> v[i].second;
        ll gd = gcd(v[i].first,v[i].second);
        v[i].first = v[i].first/gd;
        v[i].second = v[i].second/gd;
        m[make_pair(v[i].first,v[i].second)]++;
    }
    ll cnt = 0;
    for(auto it: m)
    {
            cnt += (n-m.count(make_pair(-it.first.second,it.first.first))-m.count(make_pair(it.first.second, -it.first.first)));
    }
    cout << cnt << endl;
    return 0;
}