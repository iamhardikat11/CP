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

int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
void solve(){
    string p,r;
    cin >> p >> r;
    ll cnt1 = 0,cnt2 = 0, cnt3=0, cnt4=0, cnt5 = 0;
    for(auto &x: p)
    {
        if(x=='+') cnt1++;
        if(x=='-') cnt2++;
    }
    for(auto &x: r)
    {
        if(x=='+') cnt3++;
        else if(x=='-') cnt4++;
        else cnt5++;
    }
    if(cnt5==0)
    {
        if(cnt1==cnt3 && cnt2==cnt4)
        {
            double d = 1.0;
            printf("%.12lf\n", d);
        }
        else
            printf("%.12lf\n", (double)0.0);
    }
    else
    {
        cnt1 -= cnt3;
        cnt2 -= cnt4;
        if(cnt1 < 0 || cnt2 < 0)
            printf("%.12lf\n", 0.0);
        else
        {
            double d = nCr(cnt5, cnt1)/pow(2,cnt5);
            printf("%.12lf\n", d);
        }
    }
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