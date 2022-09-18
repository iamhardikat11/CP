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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> t(n);
    for (ll i = 0; i < n; i++)
        cin >> t[i].first >> t[i].second;
    sort(t.begin(), t.end());
    // for(ll i = 0; i < t.size(); i++)
    //     cout << t[i].first << " " << t[i].second << endl;
    ll start = t[0].first, end = t[t.size() - 1].second;
    // cout << start << " " << end << endl;
    ll current_no_of_shows = 0;
    ll j = 0;
    map<ll, set<ll>> mp;
    int tv_free = 2;
    for (ll i = start; i <= end; i++)
    {
        cout << i << " " << current_no_of_shows << endl;
        while (t[j].first == i)
        {
            if (i >= t[j].first && i <= t[j].second)
            {
                if(tv_free == 0)
                {
                    cout << "NO" << endl;
                    return;
                }
                current_no_of_shows++;
                tv_free--;
                mp[t[j].second].insert(j);
            }
            if (mp.find(i) != mp.end())
            {
                current_no_of_shows -= mp.find(i)->second.size();
                tv_free++;
                if (current_no_of_shows >= 3)
                {
                    cout << "NO" << endl;
                    return;
                }
                mp.erase(mp.find(i));
            }
            if (current_no_of_shows >= 3)
            {
                cout << "NO" << endl;
                return;
            }
            j++;
        }
        cout << i << " " << current_no_of_shows << endl;
    }
    cout << "YES" << endl;
}

int main()
{
    fast_cin();
    ll t;
    //  cin >> t;
    t = 1;
    for (int it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}