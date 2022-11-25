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

int highestPowerOf2(int n)
{
    return (n & (~(n - 1)));
}
bool isPowerofTwo(long long n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
}
bool isPower(int x, int y)
{
    // logarithm function to calculate value
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); // Note : this is double
 
    // compare to the result1 or result2 both are equal
    return (res1 == res2);
}
bool comp(ll a, ll b)
{
    ll cnt1 = 0;
    while(a%10==0)
    {
        a/= 10;
        cnt1++;
    }
    ll cnt2 = 0;
    while(b%10==0)
    {
        b/= 10;
        cnt2++;
    }
    if(cnt1 == cnt2)
    {
        return a < b;
    }
    return (cnt1 < cnt2);
}
void solve(){
    ll n,m;
    cin >> n >> m;
    ll x = log10(m);
    ll t = 10;
    vector<ll> v;
    v.push_back(n*m);
    if(isPower(2,n))
    {
        x = log10(m)/log10(5);
        t = 5;
    }
    if(isPower(5,n))
    {
        x = log10(m)/log10(2);
        t = 2;
    }
    cout << t << " " << x << endl;
    
    for(ll i=1;i<=x;i++) {
         ll a = pow(t,i);
         ll e = (t == 5 ? 2 : (t==10 ? 1 : 5));
         if(a*e<m) a = a*e;
         cout << a << endl;
         ll t = m-m%a;
         cout << t << endl;
         if(t*n!=0)
            v.push_back(t*n);
    } 
    // for(auto it: v)
    // {
    //     cout << it << endl;
    // }  
    sort(v.begin(),v.end(),comp);
    cout << v[v.size()-1] << endl;
    
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