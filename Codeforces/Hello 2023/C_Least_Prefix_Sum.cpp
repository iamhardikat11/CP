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
typedef pair<ll, ll> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll>> vv32;
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
    vector<ll> v(n + 1, 0);
    forsn(i, 1, n + 1) cin >> v[i];
    vector<ll> pref(v.begin(), v.end());
    forsn(i, 1, n + 1) pref[i] += pref[i - 1];
    // for(ll i=1;i<=n;i++) cout << pref[i] << " ";
    // cout << endl;
    ll cnt = 0;
    ll extra = 0;
    for (ll i = 1; i < k; i++)
    {
        if (pref[i] < pref[k])
        {
            cnt++;
            extra += -2 * (v[k]);
            break;
        }
    }
    if (extra)
        pref[k] += -2 * (v[k]);
    for (ll i = k + 1; i <= n; i++)
    {
        if ((pref[i] + extra) >= pref[k])
        {
            continue;
        }
        else
        {
            cnt++;
            extra += -2 * v[i];
        }
    }
    ll count = 0;
    ll loss = 0;
    // priority_queue<ll, vector<ll>, greater<ll>> pq;
    // forsn(i,k+1,n)
    // {
    //     if(v[i]<0) pq.push(v[i]);
    //     loss+=v[i];
    //     while(loss<0){
    //         ll x=pq.top();
    //         pq.pop();
    //         loss += -(2*x);
    // }
    // if(v[k-1]<=0)
    //     loss=v[k-1];
    // else if(k!=1){
    //     loss = -v[k-1];
    //     count++;
    // }
    // priority_queue<ll> p;

    // for(ll i=k-2;i>=1;i--)
    // {
    //     if(v[i]>0)
    //         p.push(v[i]);
    //     loss+=v[i];
    //     while(loss>0)
    //     {
    //         ll x = p.top();
    //         p.pop();
    //         loss+=-(2*x);
    //         count++;
    //         } cout<<op<<"\n";
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll j = k; j < n; j++)
    {
        ll i = j+1;
        if (v[i] < 0)
            pq.push(v[i]);
        loss += v[i];
        while (loss < 0)
        {
            ll x = pq.top();
            pq.pop();
            loss += -(2 * x);
            count++;
        }
    }
    if (v[k] <= 0)
        loss = v[k];
    else if (k != 1)
    {
        loss = -1 * v[k];
        count++;
    }
    priority_queue<ll> pp;
    for (ll j= k - 2; j >= 1; j--)
    {
        ll i = j+1;
        if (v[i] > 0)
            pp.push(v[i]);
        loss += v[i];
        while (loss > 0)
        {
            ll x = pp.top();
            pp.pop();
            loss += -(2 * x);
            count++;
        }
    }
    cout << count << "\n";
}

ll main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (ll it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}





