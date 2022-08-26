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
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(auto &x: a) cin >> x;
    int f1 = a[0] & 1;
    int f2 = a[1] & 1;
    for(ll i=0;i<n;i++)
    {
        if(i%2==0 && (a[i]&1)==f1)
        {
            continue;
        }
        else if(i%2==1 && (a[i]&1)==f2)
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //freopen("error.txt","w",stderr);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
     solve();
    }
    return 0;
}