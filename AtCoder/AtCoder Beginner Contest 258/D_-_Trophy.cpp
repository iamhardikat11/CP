#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N,X;
    cin >> N >> X;
    vector<pair<ll,ll>> v(N);
    for(int i=0;i<N;i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    vector<ll> time;
    ll sum = 0;
    for(int i=0;i<N;i++)
    {
        sum+=v[i].first+v[i].second;
        time.push_back(sum);
    }
    
}