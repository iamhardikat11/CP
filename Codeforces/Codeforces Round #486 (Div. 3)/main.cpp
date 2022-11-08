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
    string a, b;
    cin >> a >> b;
    if (a != b)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    int cnt = 0;
    if (a[0] - '0' == 1)
        cnt++;
    forn(i, n) if (a[i] == '1' && a[i - 1] == '0') cnt++;
    if (a == b && cnt % 2)
        cout << cnt + 3 << endl;
    else if (a != b && cnt % 2 == 0)
        cout << cnt + 3 << endl;
    else
        cout << cnt << endl;
    int t = 1;
    vector<pair<int,int>> steps;
    vector<int> pos;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == '0' && a[i - 1] == '1')
            steps.push_back(make_pair(t,i));
        if (a[i] == '1' && a[i - 1] == '0')
        {
            t = i + 1;
            pos.push_back(t);
        }
    }
    map<int,int> mp;
    forn(i,steps.size()) 
    {
        cout << steps[i].first << " " << steps[i].second << endl;
        mp[steps[i].first]++;
        mp[steps[i].second]++;
    }
    if (a[n - 1] == '1')
        cout << t << ' ' << n << '\n';
    if ((a==b && (cnt & 1)) || (a!=b && (!(cnt & 1))))
    {
        cout << 1 << " " << 1 << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    mp.clear();
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