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


int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        int N, m;
        cin >> N >> m;
        vector<int> ok(N, 0);
        set<pair<int, int>, greater<pair<int, int>>> p, q;
        set<int> p1, q1;
        vector<int> Y(N + 1, N);
        int j = 1;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            if (Y[x] > y)
            {
                Y[x] = y;
            }
            p1.insert(x);
            q1.insert(y);
        }
        bool flag = true;
        for (int i = 1; i <= N; i++)
            p.insert({Y[i], i});
        stack<int> t;
        for (int i = N - 1; i >= 0; i--)
        {
            auto it = p.begin();
            while (!p.empty() && p.begin()->first == i + 1)
            {
                int v = p.begin()->second;
                p.erase(p.begin());
                q.insert({v, Y[v]});
                t.push(v);
            }
            if (q.empty())
            {
                flag = false;
                break;
            }
            else
            {
                int v = q.begin()->first;
                q.erase(q.begin());
                ok[i] = v;
            }
        }
        if (flag)
        {
            for (int i = 0; i < N; i++)
                cout << ok[i] << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
