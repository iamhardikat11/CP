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
bool acyclic(vector<vector<ll>> &g, vector<bool> &todo, vector<bool> &done, ll node, vector<ll> &order)
{
    if (todo[node])
    {
        return false;
    }
    if (done[node])
    {
        return true;
    }
    todo[node] = done[node] = true;
    for (ll neigh : g[node])
    {
        if (!acyclic(g, todo, done, neigh, order))
        {
            return false;
        }
    }
    order.push_back(node);
    todo[node] = false;
    return true;
}
vector<ll> findOrder(ll n, vector<vector<ll>> g)
{
    vector<ll> order;
    vector<bool> todo(n, false), done(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!done[i] && !acyclic(g, todo, done, i, order))
        {
            return {};
        }
    }
    reverse(order.begin(), order.end());
    return order;
}

void solve()
{
    ll n;
    cin >> n;
    v64 v(n);
    for(auto &x: v) cin >> x;
    map<ll, ll> p;
    vector<vector<ll>> s(n);

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            if (v[j]==2*v[i] || 3*v[j] == v[i])
                s[i].push_back(j);
            else if (v[j] == 2*v[i] || 3*v[i] == v[j])
                s[j].push_back(i);
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout << i << ": ";
    //     for(int j=0;j<s[i].size();j++)
    //         cout << s[i][j] << " ";
    //     cout << endl;
    // }
    vector<ll> order = findOrder(n,s);
    for(ll i=0;i<order.size();i++)
    {
        cout << v[order[i]] << " ";
    }
    cout << endl;
}
int main()
{
    fast_cin();
    {
        solve();
    }
    return 0;
}