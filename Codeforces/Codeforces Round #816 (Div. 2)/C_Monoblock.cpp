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
typedef pair<ll,ll> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll> > vv32;
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
    vector<ll> v(n);
    vector<ll> store(n,0);
    // a -> v
    // b -> store
    for(auto &x: v) cin >> x;
    while(m--)
    {
        ll i,x;
        cin >> i >> x;
        v[i-1] = x;
        ll ans = 0;
        store[0] = 1;
        for(ll j=1;j<n;j++)
            store[j] = (v[j-1]!=v[j]) ? store[j-1]+1 : store[j-1];
        vector<ll> suffix_sum(n,0);
        ll sum = 0;
        for(ll j=n-1;j>=0;j--)
        {
            sum+=(store[j]+1);
            suffix_sum[j] = sum;
        }
        for(ll j=0;j<n;j++)
            ans+= suffix_sum[j]-(n-j)*store[j];
        cout << ans << endl;
    }
}

int main()
{
 fast_cin();
 {
    solve();
 }
 return 0;
}