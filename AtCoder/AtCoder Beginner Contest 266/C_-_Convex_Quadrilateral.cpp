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

int is(p64 a, p64 b, p64 c)
{
    pair<ld,ld> t1,t2;
    t1.first = a.first-b.first;
    t1.second = a.second-b.second;
    t2.first = c.first-b.first;
    t2.second = c.second-b.second;
    double q1 = sqrt(pow(t1.first,2)+pow(t1.second,2));
    double q2 = sqrt(pow(t2.first,2)+pow(t2.second,2));
    t1.first = t1.first/q1;
    t1.second = t1.second/q1;
    t2.first = t2.first/q2;
    t2.second = t2.second/q2;
    double x = M_PI - acos(t1.first*t2.first+t1.second*t2.second);
    cout << x << endl;
    return x > 0 ? 1 : 0;
}
void solve(){
    p64 a, b, c, d;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;
    cin >> d.first >> d.second;
    ll x = is(a,b,c)+is(b,c,d)+is(c,d,a)+is(d,a,b);
    if(x==4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main()
{
 fast_cin();
 solve();
 return 0;
}