#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
// typedef vector<vector<int>> vv32;
// typedef vector<vector<ll>> vv64;
// typedef vector<vector<p64>> vvp64;
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
#define max(a, b) a > b ? a : b
#define min(a, b) a > b ? b : a
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

bool prime[200005];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    forn(i, n) cin >> v[i];
    vector<ll> w;
    map<ll, ll> mp;
    ll r = 0;
    forn(i, 200006)
    {
        if (prime[i])
        {
            w.push_back(i);
            mp[i] = r++;
        }
    }
    vector<ll> b(n, -1);
    b[0] = v[0];
    int last = v[0] % 1;
    ll i;
    auto it = mp.begin();
    bool found = false;
    map<ll,ll> temp;
    temp[b[0]] = 1ll;
    for (i = 1; i < n && !found; i++)
    {
        if (mp.find(v[i]) != mp.end())
        {
            b[i] = v[i];
            temp[v[i]] = 1;
        }
        else
        {
            for(;it!=mp.end();++it)
            {
                if(temp.find(it->first) == temp.end() && it->first > v[i])
                    break;
            }
            ll e = (*it).first;
            b[i] = e;
            temp[b[i]] = 1;
            found = true;
            break;
        }
    }
    if (found)
    {
        ll j = i + 1;
        ++it;
        for (; it != mp.end() && j<n; ++it)
        {
            if(temp.find(it->first) == temp.end())
                b[j++] = (*it).first;
        }
    }
    forn(i, n)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main()
{
    SieveOfEratosthenes(200006);
    fast_cin();
    {
        solve();
    }
    return 0;
}