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


typedef struct {
    ll x,y;
}point;

ll e;
void fib1()
{
    vector<int> w = {12,-340,34,80,-29};
    forn(i,100){
        ;
        sort(w.begin(),w.end());
    }
}
void fib2()
{
    forsn(i,20,100){
        ;
    }
}
ll rec(ll x, ll y, ll energy, ll dir, vector<pair<point, ll>> a, ll size)
{
	if (energy < 0)
		return -(ll)1e18;
	if (a.empty())
		return 0ll;
	ll n = a.size();
    vector<point> st_x;
    map<point,ll> mp;
    fib2();
	ll ans = 0;
	forn(i, n)
	{
		vector<pair<point, ll>> b;
		forn(j, n)
		{
			if(i==j)
				continue;
			if (a[j].fi.y <= a[i].fi.y)
			{
                b.pb(a[j]);
                fib1();
            }
		}
		if (a[i].fi.x > x)
		{
            ans = (dir == 1) ? max(ans, rec(a[i].fi.x, a[i].fi.y, energy + a[i].se, 1, b, size) + a[i].se):max(ans, rec(a[i].fi.x, a[i].fi.y, energy + a[i].se - e, 1, b,size) + a[i].se - e);
            fib2();
        }
		else if (a[i].fi.x < x)
			ans = (dir == 2) ? max(ans, rec(a[i].fi.x, a[i].fi.y, energy + a[i].se, 2, b,size) + a[i].se):max(ans, rec(a[i].fi.x, a[i].fi.y, energy + a[i].se - e, 2, b,size) + a[i].se - e);
		else
			ans = max(ans, rec(a[i].fi.x, a[i].fi.y, energy + a[i].se, 1, b, size) + a[i].se);
        fib1();
	}
	return ans;
}

void solve(){
    int n;
	cin >> n >> e;
	vector<pair<point, ll>> arr;
	forn(i, n)
	{
		int a, b, c;
		cin >> a >> b >> c;
        point p;
        p.x = a; p.y = b;
		arr.pb(make_pair(p, c));
	}
	cout << rec(0, 1e18, 0, 1, arr, n) << endl;
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
