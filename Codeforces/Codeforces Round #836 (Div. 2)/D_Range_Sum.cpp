void findCombinationsUtil(int arr[], int index,
						int n, int red_num)
{
	set<int> s;
	int sum = 0;
	if (red_num < 0) 
		return;
	if (red_num == 0) {
		for (int i = 0; i < index; i++) 
			s.insert(arr[i]);
		for (auto itr = s.begin();
			itr != s.end(); itr++) {
			sum = sum + (*itr);
		}
		if (sum == n) {
			for (auto i = s.begin();
				i != s.end(); i++) {
				cout << *i << " ";
			}
			cout << endl;
			return;
		}
	}
	int prev = (index == 0) ? 1 : arr[index - 1];
	for (int k = prev; k <= n; k++) {
		arr[index] = k;
		findCombinationsUtil(arr, index + 1,
							n, red_num - k);
	}
}
void findCombinations(int n)
{
	int a[n];
	findCombinationsUtil(a, 0, n, n);
}


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


void solve(){
    ll n;
    cin >> n;
    // a[0], a[n-1]
    // a[n-1]^2+a[0]^2-2a[n-1]*a[0] = a[0]+a[1]+a[2]+a[3]+..+a[n-1]
    // a[n-1]*(a[n-1]-1)+a[0]*(a[0]-1)-2a[n-1]*a[0] = a[1]+a[2]+a[3]+a[4]+....a[n-2]
    vector<ll> ans(n+1,0);
    ans[1] = 1;
    
    an
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