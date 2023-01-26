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
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    forn(i, n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    bool flag = false;
    for (auto it : mp)
    {
        if (it.second >= 3)
        {
            cout << "NO" << endl;
            return;
        }
        if (it.first == 1 && it.second >= 2)
        {
            cout << "NO" << endl;
            return;
        }
        if (it.second == 2)
        {
            flag = true;
        }
    }
    if (flag)
    {
        vector<p64> a;
        set<ll> p, q;
        forn(i, n) p.insert(i + 1);
        q = p;
        vector <int> ansp(n),ansq(n);
        forn(i, n) a.push_back({v[i], i});
        sort(all(a));
        forn(i,n)
        {
            ll idx = a[i].second;
            if (p.count(a[i].first))
            {
                auto it = q.lower_bound(a[i].first);
                if (it != q.begin())
                {
                    it--;
                    ansp[idx] = a[i].first;
                    ansq[idx] = *it;
                    q.erase(it);
                    p.erase(a[i].first);
                    auto it = mp.find(a[i].first);
                    if(it != mp.end()) mp.erase(it);
                    continue;
                }
                else if (*it == a[i].first)
                {
                    ansp[idx] = a[i].first;
                    ansq[idx] = *it;
                    q.erase(it);
                    p.erase(a[i].first);
                    auto it = mp.find(a[i].first);
                    if(it != mp.end()) mp.erase(it);
                    continue;
                }
            }
            if (q.count(a[i].first))
            {
                auto it = p.lower_bound(a[i].first);
                if (it != p.begin())
                {
                    it--;
                    ansq[idx] = a[i].first;
                    ansp[idx] = *it;
                    p.erase(it);
                    q.erase(a[i].first);
                    auto it = mp.find(a[i].first);
                    if(it != mp.end()) mp.erase(it);
                    continue;
                }
                else if (*it == a[i].first)
                {
                    ansq[idx] = a[i].first;
                    ansp[idx] = *it;
                    p.erase(it);
                    q.erase(a[i].first);
                    auto it = mp.find(a[i].first);
                    if(it != mp.end()) mp.erase(it);
                    continue;
                }
            }
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        for (auto it: ansp) cout <<it  << " ";
        cout << endl;
        for (auto it: ansq) cout <<it << " ";
        cout << endl;
    }
    else
    {
        cout << "YES" << endl;
        forn(i, n) cout << v[i] << " ";
        cout << endl;
        forn(i, n) cout << v[i] << " ";
        cout << endl;
    }
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