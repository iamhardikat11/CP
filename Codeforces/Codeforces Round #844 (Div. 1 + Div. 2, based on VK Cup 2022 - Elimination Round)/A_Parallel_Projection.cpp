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
#define ipt(n,r) forn(i,n) cin >> r[i];
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

ll min(ll a, ll b)
{
    if(a > b) return b;
    else return a;
}
void solve(){
    ll w,d,h;
    cin >> w >> d >> h;
    ll a,b,f,g;
    cin >> a >> b >> f >> g;
    vector<ll> x;
    x.pb(h);
    x.pb(a);
    x.pb(b);
    x.pb(f);
    x.pb(g);
    sort(x.begin(), x.end());
    // if(x[0]==h)
    // {
    //     cout << 2*h+abs(a-f)+abs(b-g) << endl;
    // }
    // else 
    // {
    //     cout << h+2*x[0]+abs(a-f)+abs(b-g) << endl;
    // }
    ll k = h+min(abs(a-f)+b+g, abs(b-g)+a+f);
    cout << min(k, h+min(abs(a-f)+2*d-b-g, abs(b-g)+2*w-a-f)) << endl;
    // cout << h+min(abs(a-b),w-abs(a-b))+min(abs(f-g),d-abs(f-g)) << endl;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}