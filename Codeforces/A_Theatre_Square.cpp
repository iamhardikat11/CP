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
int minDistance(vector<pair<int, int>> &a)
{
    // Write your code here
    vector<pair<int, int>> p = a;
    sort(p.begin(), p.end());
    for(int i=0;i<p.size();i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }
    pair<int, int> f = p[(p.size() - 1) / 2];
    pair<int, int> g = p[(p.size() + 1) / 2];
    cout << f.first << " " << f.second << " " << g.first << " " << g.second << endl;
    int dis1 = 0,dis2 = 0;
    for(int i=0;i<p.size();i++)
    {
        dis1+=abs(p[i].first-f.first)+abs(p[i].second-f.second);
    }
    for(int i=0;i<p.size();i++)
    {
        dis2+=abs(p[i].first-g.first)+abs(p[i].second-g.second);
    }
    return min(dis1,dis2);
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> m(n);
    for (int i = 0; i < n; i++)
        cin >> m[i].first >> m[i].second;
    cout << minDistance(m) << endl;
    return 0;
}