#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(long long target, vector<ll> v, ll N)
{
    if(v.size() == 0)
    {
        return;
    }
    ll n = v.size();
    sort(v.begin(), v.end());
    ll i = 0;
    ll j = n-1;
    while(i<j)
    {
        if(v[i]+v[j]==target)
        {
            vector<ll> tmp = {v[i],v[j]};
            cout << "[" << tmp[0] << ", " << tmp[1] << "]" << endl;
            return;
        }
        else if(v[i]+v[j]<target) i++;
        else j--;
    }
    cout << "[" << -1 << ", " << -1 << "]" << endl;
}
int main()
{
    ll N;
    cin >> N;
    vector<ll> v(N);
    for(auto &x: v)
        cin >> x;
    ll target;
    cin >> target;
    solve(target, v, N);
    return 0;
}