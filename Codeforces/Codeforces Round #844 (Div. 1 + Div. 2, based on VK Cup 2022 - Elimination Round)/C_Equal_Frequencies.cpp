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
    string s;
    cin >> s;
    map<ll, ll> mp;
    set<ll> st1;
    multiset<ll> st2;
    for (auto it : s)
        mp[it - 'a']++;
    map<ll, ll> mp1;
    for (auto it : mp)
        mp1[it.second]++;
    if (mp1.size() == 1)
    {
        cout << 0 << endl
             << s << endl;
        return;
    }
    else
    {
        vector<int> st;
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
                st.pb(i);
            st1.insert(i);
        }
        if(st.size()==0) {

        }
        int mn_oper = INT_MAX;
        int target = -1;
        for (int i = 0; i < st.size(); i++)
        {
            int k = 0;
            for (auto it : mp)
            {
                if (it.second > n / st[i])
                    k += max(0, it.second - n / st[i]);
                else
                    k += it.second;
            }
            if (k / 2 - 1 < mn_oper)
            {
                target = st[i];
                mn_oper = k / 2 - 1;
            }
        }
    }
    ll ans = LLONG_MAX;
    int ind = -1;
    forn(i, 26)
    {
        ll count = i + 1;
        if (n % count == 0)
        {
            ll z = n / count;
            priority_queue<ll> pq;
            forn(i, 26) pq.push(mp[i]);
            ll p = 0;
            while (count--)
            {
                p += max(0, z - pq.top());
                pq.pop();
                st1.insert(count);
            }
            if (ans > p)
            {
                ans = p;
                ind = i + 1;
                st1.insert(ans);
                st2.insert(i+1);
                st2.insert(ind);
            }
        }
    }
    priority_queue<pair<ll, ll>> pq;
    mp1.clear();
    forn(i,26)
    {
        pq.push({mp[i], i});
        mp1[i] = INT_MAX;
    }
    ll z = n / ind;
    while (ind--)
    {
        mp1[pq.top().second] = pq.top().first - z;
        pq.pop();
        
    }
    string x;
    forn(i,n)
    {
        if (mp1[(s[i] - 'a')] == LLONG_MAX)
        {
            forn(j,26)
            {
                st2.insert(j);
                if (mp1[j] < 0)
                {
                    mp1[j]++;
                    x.pb(char(j + (int)('a')));
                    st1.insert(j);
                    auto it = st2.find((ll)s[i]);
                    st2.insert(j + (int)('a'));
                    break;

                }
            }
            continue;
        }
        else if (mp1[(s[i] - 'a')] > 0)
        {
            mp1[(s[i] - 'a')]--;
            forn(j,26)
            {
                if (mp1[j] < 0)
                {
                    mp1[j]++;
                    x.pb(char(j + (int)('a')));
                    st1.insert(j);
                    auto it = st2.find((ll)s[i]);
                    st2.insert(j + (int)('a'));
                    break;
                }
            }
            continue;
        }
        x.pb(s[i]);
        auto it = st2.find((ll)s[i]);
        if(it!=st2.end())st2.erase(it);
    }
    cout << ans << endl << x << endl;
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