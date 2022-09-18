#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin >> n;
    map<ll,ll> mp;
    ll cnt = 0;
    while(n!=1)
    {
        if(mp[n]!=0 || n==0)
        {
            // cout << n << endl;
            cout << -1 << endl;
            return;
        }
        mp[n]++;
        ll p = 0;
        while(n)
        {
            p += pow(n%10,2);
            n /= 10; 
        }
        n = p;
        // cout << n << endl;
        cnt++;
    }
    cout << cnt << endl;
}

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 ll t = 1;
 // cin >> t;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}