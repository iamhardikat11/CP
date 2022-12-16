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
bool prime[200005];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
ll M = pow(2, 16);
map<ll, ll> st1;
void printSol(vector<int> a, int N)
{
    for (ll i = 1; i <= N; i++)
        cout << a[i] << " ";
    cout << endl;
}
void solve()
{
    int n,x;
    cin >> n >> x;
    int k = n/x;
    if(n%x!=0 || n>>16 == x) {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    ans.push_back(0);
    ans.push_back(x);
    map<int,int> mp;
    for (int i = 2; i < n; i++){
        if(n/x==200){
            cout << -1 << endl;
            continue;
        }
        ans.push_back(i);
        mp[ans[0]]++;
    }
    ans.push_back(1);
    for(int i=2;i<50 && i*i<=n/x;i++){
        while(n/x%i==0) {
            ans[x] = x*i;
            for(ll z=1;z<=10;z++)
                mp[ans[x]/z] += x*i;
            x*=i;
        }
    }
    ll sum = 0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        sum += it->second;
    }
    if(x<n) ans[x] = n;
    printSol(ans, n);
}

int main()
{
        SieveOfEratosthenes(1000);
        fast_cin();
        ll t;
        cin >> t;
        for (int it = 1; it <= t; it++)
        {
            solve();
        }
        return 0;
}
