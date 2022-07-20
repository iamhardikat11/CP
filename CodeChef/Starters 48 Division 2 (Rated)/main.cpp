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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.first > b.first);
}
void solve()
{
    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> A(M);
    for (int i = 0; i < M; i++)
    {
            cin >> A[i].first >> A[i].second;
    }
    sort(A.begin(), A.end(), cmp);
    map<int, set<int>> P;
    for (int i = 0; i < M; i++)
    {
        P[A[i].second].insert(A[i].first);
    }
    int sum = 0;
    for (auto x : P)
    {
        if ((x).second.size() + sum > (x).first)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            sum += x.second.size();
        }
    }
    vector<int> v(N, 0);
    map<int, int> q;
    vector<int> hash(N+1,0);
    if (P[1].size() != 0)
    {
            v[0] = (*P[1].begin());
            for (int i = 1; i <= N; i++)
            {
                if(i!=v[0])
                {
                        q[i] = 1;
                        hash[i] = 1;
                }
            }
    }
    else
    {
        v[0] = 1;
        for (int i = 2; i <= N; i++)
                q[i] = 1;
    }
    int curr = 1;
    for (int i = 2; i <= N; i++)
    {
        set<int> z = P[i];
        if (z.size() != 0)
        {
            bool flag = false;
            for (auto it = z.begin(); it != z.end(); it++)
            {
                if(q[(*it)])
                {   
                    
                    v[curr] = (*it);
                    auto x = q.find((*it));
                    q.erase(x);
                    curr++;
                    flag = true;
                }
            }
            if(!flag)
            {
               cout << curr << " " << (*q.begin()).first << endl;
               v[curr] = (*q.begin()).first;
               q.erase(q.begin());
               curr++; 
            }
        }
        else
        {
            v[curr] = (*q.begin()).first;
            q.erase(q.begin());
            curr++;
        }
    }
    for (int i = 0; i < N; i++)
        cout << v[i] << " ";
    cout << endl;
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