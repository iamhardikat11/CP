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
 
bool findPath(map<ll,ll> r,ll i,ll n)
{
    if(i==n) return true;
    else if(i==n-1 && r[i+1]) {
        return false;
    }
    else if(r[i+1] && r[i+2]) {
        return false;
    }
    return findPath(r,i+1,n) || findPath(r,i+2,n);
}
void solve(){
    ll n,m;
    cin >> n >> m;
    map<ll,ll> r;
    for(ll i=0; i < m; i++)
    {
        ll x;
        cin >> x;
        r[x]++;
    }
    ll i=1;
    if(r[1] || r[n]) {
        cout << "NO" << endl;
        return;
    }
    for(ll i=1;i<=n;i++)
    {
        if(r[i+2] && r[i+3] && !r[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    // if(findPath(r,i,n))
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
}
int main()
{
 fast_cin();
 solve();
 return 0;
}