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
    // (a-X)/(b-Y) = x/y
    // such that (a-X)*(b-Y)
    // is maximum
    // a*y-X*y = b*x-Y*x
    // a*y-b*x = X*y-Y*x
    // Find X and Y such that (a-X)*(b-Y)
    // Let a-X = s
    // b-Y = t
    // a-(b-Y)*(x)/(y)
    // (b-Y) = k*y
    // b-(k*y)
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll gd = gcd(x,y);
    x = x / gd;
    y = y / gd;
    // // minimise(X,Y)
    ll w = 0;
    ll h = 0;
    ll x1 = a-(a%x);
    ll y1 = (y*(x1/x));
    if(x1 <= a && y1 <= b && x1*y1 > w*h) {
        w = x1;
        h = y1;
    }
    ll y2 = b-(b%y);
    ll x2 = x*(y2/y);
    if(x2 <= a && y2 <= b && x2*y2 > w*h) {
        w = x2;
        h = y2;
    }
    cout << w << " " << h << endl;
}

int main()
{
    fast_cin();
    ll t;
    t = 1;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}