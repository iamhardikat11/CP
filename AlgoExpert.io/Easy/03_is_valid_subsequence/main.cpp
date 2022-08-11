#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll N, vector<ll> array, ll M, vector<ll> sequence)
{
    int cnt = 0;
    for(ll i=0;i<N && cnt<M;i++)
    {
        if(array[i]==sequence[cnt])
            cnt++;
    }
    if(cnt==M) cout << "true" << endl;
    else cout << "false" << endl;
} 
int main()
{
    ll N,M;
    cin >> N >> M;
    vector<ll> v1(N,0ll),v2(M,0ll);
    for(auto &x: v1) cin >> x;
    for(auto &x: v2) cin >> x;
    solve(N,v1,M,v2);
    return 0;
}