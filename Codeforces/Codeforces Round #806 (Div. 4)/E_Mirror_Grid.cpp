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

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int cnt = 0;
    int k = 0;
    if (n & 1)
    {
        while (n!=1)
        {
            p32 p1 = {0, 0};
            p32 p2 = {0, n - 1};
            p32 p3 = {n - 1, 0};
            p32 p4 = {n - 1, n - 1};
            vector<int> x(n - 1, 0);
            for (int i = 0; i < n - 1; i++)
            {
                x[i] = x[i] + (v[p1.fi+k][p1.se + i+k] - 48) + (v[p2.fi + i+k][p2.se+k] - 48) + (v[p3.fi - i+k][p3.se+k] - 48) + (v[p4.fi+k][p4.se - i+k] - 48);
                if (x[i] == 1 || x[i] == 3)
                    cnt++;
                if (x[i] == 2)
                    cnt += 2;
            }
            // cout << endl;
            n -= 2;
            k++;
        }
        cout << cnt << endl;
    }
    else
    {
        while (n>0)
        {
            p32 p1 = {0, 0};
            p32 p2 = {0, n - 1};
            p32 p3 = {n - 1, 0};
            p32 p4 = {n - 1, n - 1};
            vector<int> x(n - 1, 0);
            for (int i = 0; i < n - 1; i++)
            {
                x[i] = x[i] + (v[p1.fi][p1.se + i] - 48) + (v[p2.fi + i][p2.se] - 48) + (v[p3.fi - i][p3.se] - 48) + (v[p4.fi][p4.se - i] - 48);
                if (x[i] == 1 || x[i] == 3)
                    cnt++;
                if (x[i] == 2)
                    cnt += 2;
            }
            k++;
            n -= 2;
        }
        cout << cnt << endl;
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