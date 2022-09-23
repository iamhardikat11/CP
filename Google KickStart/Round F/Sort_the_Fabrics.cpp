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
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

bool compare1(pair<string,pair<ll,ll>> &x, pair<string,pair<ll,ll>> &y)
{
    int p = x.first.compare(y.first);
    if (p == 0)
        return x.second.second < y.second.second;
    else if(p >= 1)
        return false;
    else
        return true;
}
bool compare2(pair<string,pair<ll,ll>> &x, pair<string,pair<ll,ll>> &y)
{
    if(x.second.first == y.second.first)
    {
        return x.second.second < y.second.second;
    }
    return x.second.first < y.second.first;
}
void solve(){
    ll n;
    cin >> n;
    vector<pair<string,pair<ll,ll>>> v(n);
    for(ll i = 0; i < n; i++) 
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    vector<pair<string,pair<ll,ll>>> a = v;
    vector<pair<string,pair<ll,ll>>> b = v;
    sort(a.begin(), a.end(), compare1);
    sort(b.begin(), b.end(), compare2);
    ll cnt = 0;
    // for(ll i = 0; i < a.size(); i++)
    // {
    //     cout << a[i].first << " " << a[i].second.first << " " << a[i].second.second << endl;
    // }
    // cout << endl;
    // for(ll i = 0; i < b.size(); i++)
    // {
    //     cout << b[i].first << " " << b[i].second.first << " " << b[i].second.second << endl;
    // }
    for(ll i = 0; i < a.size(); i++)
    {
        if(a[i]==b[i]) cnt++;
    }
    cout << cnt << endl;
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    cout << "Case #" << it << ": ";
    solve();
 }
 return 0;
}