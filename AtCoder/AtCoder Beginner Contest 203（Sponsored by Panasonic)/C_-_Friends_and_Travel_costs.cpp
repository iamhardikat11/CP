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
bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.first < b.first;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll N,K;
    cin >> N >> K;
    vector<pair<ll,ll>> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(),A.end(), cmp);
    ll i=0;
    ll j=0; 
    while(K)
    {
        i+=K;
        K=0;
        while(j < N && i>=A[j].first)
        {
            K+=A[j].second;
            j++;
        }
    }
    // cout << j
    cout << i << endl;
    return 0;
}