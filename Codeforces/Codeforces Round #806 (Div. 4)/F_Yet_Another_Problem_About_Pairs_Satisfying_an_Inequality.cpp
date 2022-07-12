
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
bool compare(p64 a, p64 b)
{
    if(a.second == b.second) return false;
    else
    {
        if(a.first > b.first) return false;
        else return true;
    }
    return false;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (ll it = 1; it <= t; it++)
    {
        ll N;
        cin >> N;
        vector<ll> v(N);
        vector<p64> temp;
        for (ll i = 0; i < N; i++)
        {
            cin >> v[i];
            if (v[i] < (i + 1))
                temp.pb(make_pair(v[i], i+1));
        }
        
        ll inversionCount = 0;
        sort(temp.begin(), temp.end(), compare);
        ll n = temp.size();
        for (auto &x : temp)
        {
            auto index = upper_bound(temp.begin(), temp.end(), make_pair(x.second, LLONG_MAX));
            if (n != (ll)(index - temp.begin())) inversionCount = inversionCount + (ll)(n - (index - temp.begin())) ;
        }
        cout << inversionCount << endl;
    }
    return 0;
}