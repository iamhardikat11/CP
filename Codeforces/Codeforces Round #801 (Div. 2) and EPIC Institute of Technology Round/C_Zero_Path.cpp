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

int countPaths(vector<vector<int>> const &matrix, int m, int n, int cost,
               unordered_map<string, int> &look)
{
    if (m == 0 && n == 0)
    {
        if (matrix[0][0] - cost == 0)
            return 1;
        else
            return 0;
    }
    string key = to_string(m) + "|" + to_string(n) + "|" + to_string(cost);
    if (look.find(key) == look.end())
    {
        if (m == 0)
            look[key] = countPaths(matrix, 0, n - 1, cost - matrix[m][n], look);
        else if (n == 0)
            look[key] = countPaths(matrix, m - 1, 0, cost - matrix[m][n], look);
        else
            look[key] = countPaths(matrix, m - 1, n, cost - matrix[m][n], look) +
                          countPaths(matrix, m, n - 1, cost - matrix[m][n], look);
    }
    return look[key];
}

int countPaths(vector<vector<int>> const &matrix, int cost)
{
    int M = matrix.size();
    int N = matrix[0].size();
    unordered_map<string, int> look;

    return countPaths(matrix, M - 1, N - 1, cost, look);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        }

        int cost = 0;
        if(countPaths(v,cost)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
