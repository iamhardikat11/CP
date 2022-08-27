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


void solve(){
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    ll mx_a=INT_MIN, mn_a = INT_MAX, mn_b = INT_MAX;
    forn(i,n)
    {
        cin >> a[i];
        mx_a = max(mx_a,a[i]);
        mn_a = min(mn_a,a[i]);
    }
    forn(i,m)
    {
        cin >> b[i];
        mn_b = min(mn_b,b[i]);
    }
    // v >= mx_a && v < mn_b &&  2*mn_a <= v
    if(mn_b-1 < mx_a || mn_b-1 < 2*mn_a)
    {
        cout << -1 << endl;
        return;
    }
    ll i;
    for(i=mn_b-1;i>=mx_a;i--)
    {
        if(i-2*mn_a >= 1)
           continue;
        else
        {
            cout << i << endl;
            return;
        }
    }
    if((i+1)>= mx_a && (i+1) < mn_b && 2*mn_a <= (i+1))
        cout << i+1 << endl;
    else 
        cout << -1 << endl;
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