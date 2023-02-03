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

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> v(n, vector<ll>(n - 1, 0));
    vector<map<ll, ll>> mp(n - 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> v[i][j];
            mp[j][v[i][j]]++;
        }
    }
    int nextValue = 0;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        auto it = mp[i].begin();
        auto it1 = mp[i].begin();
        it1++;
        if (j == 0)
        {
            if (it->second == n - j - 1)
            {
                cout << it->first << " ";
                nextValue = it1->first;
            }
            else
            {
                cout << it1->first << " ";
                nextValue = it->first;
            }
        }
        else
        {
            cout << nextValue << " ";
            if(it->first != nextValue)
            {
                nextValue = it->first;
            }
            else
            {
                nextValue = it1->first;
            }
        }
        j++;
    }
    cout << nextValue << endl;
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