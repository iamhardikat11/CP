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

const ll N = 200000;
ll degree[N];
bool found[N];
vector<ll> curr_graph;
vector<ll> adj_list[N];

void DFS(ll v)
{
	found[v] = true;
	curr_graph.push_back(v);
	for (ll it : adj_list[v])
		if (!found[it])
			DFS(it);
}
void addEdge(vector<ll> adj_list[N], ll src, ll dest)
{
	src--, dest--;
	adj_list[src].push_back(dest);
	adj_list[dest].push_back(src);
	degree[src]++;
	degree[dest]++;
}

ll countSingleCycles(ll n, ll m)
{
	ll count = 0;
	for (ll i = 0; i < n; ++i) {
		if (!found[i]) {
			curr_graph.clear();
			DFS(i);
			ll flag = 1;
			for (ll v : curr_graph) {
				if (degree[v] == 2)
					continue;
				else {
					flag = 0;
					break;
				}
			}
			if (flag == 1) 
				count++;
		}
	}
	return(count);
}

int main()
{
    ll n,m;
    cin >> n >> m;
    for(ll i = 0; i < m; i++)
    {
        ll x,y;
        cin >> x >> y;
        addEdge(adj_list, x, y);
    }
	cout << countSingleCycles(n, m);
	return 0;
}
