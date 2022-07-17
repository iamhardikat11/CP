#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.first > b.first;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll N,L;
    cin >> N >> L;
    vector<pair<ll,ll>> v(N);
    for(ll i=0;i<N;i++) {
        int x;
        cin >> x;
        v[i].first = x;
        v[i].second = i+1;
    }
    sort(v.begin(),v.end(),cmp);
    string ans = "YES";
    ll curr = 0;
    for(ll i=N-2;i>=0;i--)
    {
        if(curr<L)
        {
            curr+=v[i].first;
        }
        else
        {
            
        }   
    }
    return 0;
}