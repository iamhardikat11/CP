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
ll MOD = 1e9 + 7;
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
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int ans = 0;
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            b[0] = v[0];
        }
        else
        {
            if (v[i - 1] & 1)
            {

                if (v[i] & 1)
                {
                    if (gcd(v[i - 1], v[i]) == 1)
                        b[i] = v[i];
                    else if (gcd(v[i - 1], v[i]) > 1)
                    {
                        b[i] = v[i] + 1;
                        if (gcd(v[i], b[i]) != 1)
                            b[i]++;
                    }
                    continue;
                }
                else
                {
                    if (gcd(v[i - 1], v[i]) == 1)
                        b[i] = v[i];
                    else if (gcd(v[i - 1], v[i]) > 1)
                    {
                        b[i] = v[i] + 1;
                        if (gcd(v[i], b[i]) != 1)
                            b[i]++;
                    }
                }
            }
            else
            {
                if (v[i] & 1)
                {
                    b[i] = v[i];
                    continue;
                }
                b[i] = v[i] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int p = pow(2, abs(b[i] - v[i]));
        ans = (ans + p) % MOD;
    }
    cout << ans << endl;
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