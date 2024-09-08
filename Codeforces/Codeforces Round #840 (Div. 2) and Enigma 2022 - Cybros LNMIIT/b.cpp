// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #include <bits/stdc++.h>
// #include <complex>
// #include <queue>
// #include <set>
// #include <unordered_set>
// #include <list>
// #include <chrono>
// #include <random>
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <string>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <stack>
// #include <iomanip>
// #include <fstream>

// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> p32;
// typedef pair<ll,ll> p64;
// typedef pair<double,double> pdd;
// typedef vector<ll> v64;
// typedef vector<int> v32;
// typedef vector<vector<int> > vv32;
// typedef vector<vector<ll> > vv64;
// typedef vector<vector<p64> > vvp64;
// typedef vector<p64> vp64;
// typedef vector<p32> vp32;
// ll MOD = 998244353;
// double eps = 1e-12;
// #define forn(i,e) for(ll i = 0; i < e; i++)
// #define forsn(i,s,e) for(ll i = s; i < e; i++)
// #define rforn(i,s) for(ll i = s; i >= 0; i--)
// #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
// #define ln "\n"
// #define dbg(x) cout<<#x<<" = "<<x<<ln
// #define mp make_pair
// #define pb push_back
// #define fi first
// #define se second
// #define INF 2e18
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((ll)(x).size())
// #define max(a,b) a > b ? a : b
// #define min(a,b) a > b? b : a
// #define ipt(n,r) forn(i,n) cin >> r[i];
// #define ys cout << "YES" << endl;
// #define no cout << "NO" << endl;

// void solve(){
//     ll n,k;
//     cin >> n >> k;
//     vector<pair<ll,ll>> v(n);
//     forn(i,n) cin >> v[i].first;
//     forn(i,n) cin >> v[i].second;
//     sort(v.begin(),v.end());
//     map<ll,ll> mp;
//     forn(i,n)
//     {
//         ll r = ceil(v[i].first/(double)k);
//         if(mp.find(r)==mp.end())
//         	mp[r] = v[i].second;
//         else
//         	mp[r] = min(v[i].second,mp[r]);
//     }
//     if(mp.size()==1 && mp.begin()->first == 1)
//     {
//         cout << "YES" << endl;
//         return;
//     }
//     ll mx = v[n-1].first;
//     auto it = mp.begin();
//     auto x = mp.end();
//     x--;
//     if(it!=x) it++;
//     // for(auto it: mp)
//     // {
//     //     cout << it.first <<  " " << it.second << endl;
//     // }
//     while(k>=0)
//     {
//         mx -= k;
//         k -= it->second;
//         if(it!=x)
//             it++;
//     }
//     if(mx <= 0) cout << "YES" << endl;
//     else cout << "NO" << endl;
// }

// int main()
// {
//  fast_cin();
//  ll t;
//  cin >> t;
//  for(int it=1;it<=t;it++) {
//     solve();
//  }
//  return 0;
// }
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
#define max(a, b) a > b ? a : b
#define min(a, b) a > b ? b : a
#define ipt(n, r) forn(i, n) cin >> r[i];
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    forn(i, n) cin >> v[i].first;
    forn(i, n) cin >> v[i].second;
    ll mx = v[n - 1].first;
    ll time = ceil(v[n - 1].first / (double)k) + (v[n - 1].first % k != 0);
    map<ll, ll> mp;
    forn(i, n)
    {
        ll r = v[i].second;
        ll p = ceil(v[i].first / (double)k) + (v[i].first % k != 0);
        if (mp.find(p) == mp.end())
        {
            k -= mp[p];
            p = ceil(v[i].first / (double)k) + (v[i].first % k != 0);
            mp[p] = r;
        }
        else
            mp[p] = min(r, mp[p]);
    }
    ll sum = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        if (it == mp.begin())
            continue;
        else
            sum += it->second;
    }
    sort(v.begin(), v.end());
    multiset<pair<long long, long long>> ms;
    forn(i,n)
        ms.insert({v[i].second, v[i].first});
    ll f = 0;
    while (ms.size() > 0 && k > 0)
    {
        for (auto it = ms.begin(); it != ms.end(); )
        {
            if (it->second - k > 0)
                ms.insert({it->first, it->second - k});
            ms.erase(it++);
        }
        k -= ms.begin()->first;
    }
    ms.size() == 0 ? cout << "YES" << endl : cout << "NO" << endl;
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
    }