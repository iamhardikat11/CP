#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll mx = INT_MIN;
    ll sum=0;
    for(ll i = 0; i < n;i++){
        cin >> v[i];
        mx = max(mx, v[i]);
        sum+=mx-v[i];
    }
    cout << sum <<endl;
    return 0;
}