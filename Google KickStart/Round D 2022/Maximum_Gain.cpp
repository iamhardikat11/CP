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
 

void solve()
{ 
    ll n,m,k,i,w=0,c,s,t,p=0,q=0;
    cin>>n; 
    vector<ll>a(n); 
    for(auto&x:a)cin>>x,p+=x; 
    cin>>m; 
    vector<ll>b(m); 
    for(auto&x:b)cin>>x,q+=x; 
    cin>>k;
    k=n+m-k; 
    for(ll I=0;I<=k;I++){
        if(I>n || k-I>m) continue; 
        for(i=0,c=0;i<I;i++)c+=a[i]; 
        s=c; 
        for(;i<n;i++)c+=a[i]-a[i-I],s=min(s,c); 
        for(i=0,c=0;i<k-I;i++)c+=b[i]; 
        t=c; 
        for(;i<m;i++)c+=b[i]-b[i-k+I],t=min(t,c);
        w=max(w,p-s+q-t); 
    }
    cout<<w<<'\n';
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