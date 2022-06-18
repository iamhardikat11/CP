#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N,Q;
    cin >> N >> Q;
    vector<ll> V(N);
    ll sum = 0;
    vector<ll> q;
    for(ll i=0; i<N; i++){
        cin >> V[i];
        sum+=V[i];
        q.push_back(sum);
    }
    
}