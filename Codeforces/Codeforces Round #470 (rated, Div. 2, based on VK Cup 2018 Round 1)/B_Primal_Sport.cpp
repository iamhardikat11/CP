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
vector<bool> seive(1e6 + 1, true);

void seive1()
{
    int n = 1e6;
    for (int i = 2; i * i <= n; i++)
    {
        if (seive[i])
        {
            for (int j = i * i; j <= n; j += i)
                seive[j] = false;
        }
    }
}
void solve()
{
    seive1();
    ll X2;
    cin >> X2;
    bool found = false;
    for (int i = X2 / 2; i >= 2; i--)
    {
        if (X2 % i == 0 && seive[i])
        {
            X2 = (X2 / i - 1) * i + 1;
            break;
        }
    }
    int cnt = 0;
    if (seive[X2])
        cout << X2 << endl;
    else
    {
        for (int i = X2 / 2; i >= 2; i--)
        {
            if (X2 % i == 0 && seive[i])
            {
                X2 = (X2 / i - 1) * i + 1;
                break;
            }
        }
        int r = X2;
        for (int i = 2; i <= ceil(r / 2); i++)
        {
            if (seive[i] && r%i==0)
            {
                cnt++;
            }
        }
        if (cnt == 1 || seive[X2])
            X2--;
        cout << X2 << endl;
    }
}
int main()
{
    fast_cin();
    solve();
    return 0;
}