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
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int first_pos = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] >= 0 && first_pos == -1)
            first_pos = i;
    }
    int i = v[first_pos] == 0 ? first_pos : first_pos - 1;
    int j = n - 1;
    vector<int> ans;
    int r = i;
    int s = i + 1;
    while (r >= 0 && s < n)
    {
        if (v[r] * v[r] < v[s] * v[s])
        {
            ans.push_back(v[r] * v[r]);
            r--;
        }
        else if (v[r] * v[r] > v[s] * v[s])
        {
            ans.push_back(v[s] * v[s]);
            s++;
        }
    }
    // cout << r << " " << s << endl;
    if (r < 0)
    {
        for (int i = s; i < n; i++)
            ans.push_back(v[i] * v[i]);
    }
    else
    {
        for (int i = r; i >= 0; i--)
            ans.push_back(v[i] * v[i]);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}

int main()
{
    fast_cin();
    {
        solve();
    }
    return 0;
}