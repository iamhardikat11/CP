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
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]=='0' || a[i]=='8')
        {
            cout << "YES" << endl;
            cout << a[i] << endl;
            return;
        }
        for (int j = i + 1; j < a.size(); j++)
        {
            if(a[i]!='0')
            {
                string x;
                x.push_back(a[i]);
                x.push_back(a[j]);
                if(stoi(x)%8==0)
                {
                    cout << "YES" << endl;
                    cout << x << endl;
                    return;
                }
            }
            for (int k = j + 1; k < a.size(); k++)
            {
                string x;
                if(a[i]==a[j] && a[j]==a[k] && a[k]=='0')
                {
                    cout << "YES" << endl;
                    cout << 0 << endl;
                    return;
                }
                else if (a[i] != '0')
                {
                    x.push_back(a[i]);
                    x.push_back(a[j]);
                    x.push_back(a[k]);
                    if(stoi(x)%8==0)
                    {
                        cout << "YES" << endl;
                        cout << x << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    fast_cin();
    ll t;
    {
        solve();
    }
    return 0;
}