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
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define max(a,b) a > b ? a : b
#define min(a,b) a > b? b : a
#define ipt(n,r) forn(i,n) cin >> r[i];
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;


void solve(){
    ll n;
    cin >> n;
    vector<pair<ll,ll>> v(n);
    ll min_1 = LLONG_MAX;
    ll max_1 = LLONG_MIN;
    forn(i,n) {
        cin >> v[i].first >> v[i].second;
        min_1 = min(min_1, v[i].first);
        max_1 = max(max_1, v[i].second);
    }
    vector<ll> a(max_1-min_1+2,0);
    forn(i,n)
    {
        a[v[i].first-min_1]++;
        a[v[i].second-min_1+1]--;
    }
    vector<ll> b(max_1-min_1+2,0);
    forn(i,max_1-min_1+2)
    {
        if(i==0) b[i] = a[i];
        else b[i] = b[i-1]+a[i];
    }
    max_1 = LLONG_MIN;
    forn(i,b.size())
    {
        max_1 = max(max_1, b[i]);
    }
    cout << max_1 << endl;
}

int main()
{
 fast_cin();
 ll t;
 t = 1;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}