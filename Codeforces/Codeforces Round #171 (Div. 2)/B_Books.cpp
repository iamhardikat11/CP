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
    ll n,t;
    cin >> n >> t;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    ll sum=0;
    for(ll i=n-1;i>=0;i--)
    {
        sum+=a[i];
        if(sum==t) {
            cout << (n-i) << endl;
            return 0;
        }
        else if(sum > t) {
            cout << (n-i-1) << endl;
            return 0;
        }
    }
    if(sum <= t) cout << n << endl;
    return 0;
}