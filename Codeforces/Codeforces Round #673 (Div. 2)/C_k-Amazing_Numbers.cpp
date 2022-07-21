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
 

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,vector<int>> m;
    map<int,int> p;
    int x = INT_MAX;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        m[v[i]].push_back(i);
        p[i+1] = INT_MAX;
    }
    if(m[v[0]].size()!=n)
    {
        p[1] = -1;
    }
    for(auto x : m)
    {
        if(x.second.size()==1) continue; 
        int mx = 0;  
        for(int i=0;i<x.second.size()-1; i++)
            mx = max(mx, x.second[i+1]-x.second[i]);
        for(int i=mx-1;i<n;i++)
            if(p[i+1]>x.first) p[i+1] = x.first;
    }
    for(int i=n/2;i)
    for(auto x : p)
    {
        if(x.second==INT_MAX) cout << -1 << " ";
        else cout << x.second << " ";
    }
    cout << endl;
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