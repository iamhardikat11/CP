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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll N,M;
    cin >> N >> M;
    vector<ll> a(N),b(N);
    vector<pair<ll,ll>> e(M);
    pair<ll,ll> sum = {0,0};
    forn(i,N){
        cin >> a[i];
        sum.first+=a[i];
    }
    forn(i,N){
        cin >> b[i];
        sum.second+=b[i];
    }
    forn(i,M)
        cin >> e[i].first >> e[i].second;
    if(sum.first==sum.second) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}