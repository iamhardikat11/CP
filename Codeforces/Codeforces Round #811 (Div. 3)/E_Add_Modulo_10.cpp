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
typedef vector<int> v64;
typedef vector<ll> v32;
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

string solve()
{
    string ans = "";
    ll N;
    cin >> N;
    vector<ll> v;
    vector<ll> store(3, 0);
    map<int, set<ll>> s;
    map<ll, ll> c;
    map<ll, vector<ll>> m;
    while (N--)
    {
        ll a;
        cin >> a;
        if (a % 10 == 0)
        {
            store[0] = 1;
            s[0].insert(a);
        }
        else if (a % 10 == 5)
        {
            store[1] = 1;
            s[1].insert(a);
        }
        else
            store[2] = 1;
        if (c[a] == 0)
            v.push_back(a);
        m[a % 10].push_back(a);
        c[a]++;
    }
    sort(v.begin(), v.end());
    if ((store[1] == 1 || store[0] == 1) && store[2] == 1)
        ans = "No";
    else if (store[2] == 1)
    {
        map<ll, ll> mapch;
        vector<ll> vectorch;
        ll f = 0;
        if (m[1].size() > 1)
            ans = "No";
        else if (m[1].size() == 1)
            m[2].push_back(m[1][0] + 1);
        if (m[3].size() > 1)
            ans = "No";
        else if (m[3].size() == 1)
            m[6].push_back(m[3][0] + 3);
        if (m[7].size() > 1)
            ans = "No";
        else if (m[7].size() == 1)
            m[4].push_back(m[7][0] + 7);
        if (m[9].size() > 1)
            ans = "No";
        else if (m[9].size() == 1)
            m[8].push_back(m[9][0] + 9);
        for (auto it : m[4])
            m[8].push_back(it + 4);
        for (auto it : m[6])
            m[8].push_back(it + 12);
        for (auto it : m[2])
            m[8].push_back(it + 6);

        for (auto it : m[8])
            if (!mapch[it])
                vectorch.push_back(it),mapch[it]++;
        sort(vectorch.begin(), vectorch.end());
        for (ll i = 1; i < vectorch.size(); i++)
            if (vectorch[i] != vectorch[i - 1] + 20)
                f = 1;
        ans = (!f) ? "Yes" : "No";
    }
    else if (store[1] == 0 && store[0] == 1)
        ans = s[0].size() == 1 ? "Yes" : "No";
    else if (store[1] == 1 && store[0] == 0)
        ans = "Yes";
    else if (store[1] == store[0] == 1)
    {
        if (s[0].size() > 1)
            ans = "No";
        else
            ans = (*s[0].begin() >= *s[1].begin()) ? "Yes" : "No";
    }
    return ans;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (ll it = 1; it <= t; it++)
    {
        cout << solve() << endl;
    }
    return 0;
}