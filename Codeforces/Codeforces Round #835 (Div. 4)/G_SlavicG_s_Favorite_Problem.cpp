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
typedef pair<ll, ll> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define max(a, b) a > b ? a : b
#define min(a, b) a > b ? b : a
#define ipt(n, r) forn(i, n) cin >> r[i];
#define ys cout << "YES" << endl;
#define no cout << "NO" << endl;

typedef pair<ll, ll> iPair;
class Graph {
	ll V;
	list<pair<ll, ll> >* adj;

public:
	Graph(ll V);
	void addEdge(ll u, ll v, ll w);
	void shortestPath(ll s);
};
Graph::Graph(ll V)
{
	this->V = V;
	adj = new list<iPair>[V];
}

void Graph::addEdge(ll u, ll v, ll w)
{
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
}

void Graph::shortestPath(ll src)
{
	priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
	vector<ll> dist(V, LLONG_MAX);
	pq.push(make_pair(0, src));
	dist[src] = 0;
	while (!pq.empty()) {
		ll u = pq.top().second;
		pq.pop();
		list<pair<ll, ll> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i) {
			ll v = (*i).first;
			ll weight = (*i).second;
			if (weight != 0 && dist[v] > (dist[u] ^ weight)) {
				dist[v] = (dist[u] ^ weight);
				pq.push(make_pair(dist[v], v));
			}
		}
	}

	printf("Vertex Distance from Source\n");
	for (ll i = 0; i < V; ++i)
		cout << i << " " << dist[i] << endl;
}


void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<map<ll, ll>> weight(n);
    bool found = false;
    Graph g(n);
    forn(i, n - 1)
    {
        ll x, y, w;
        cin >> x >> y >> w;
        if (x == a && y == b && w == 0)
            found = true;
        {
            x--;
            y--;
            g.addEdge(x, y, w);
            // g.addEdge(y, x, w);
        }
    }
    if (found)
    {
        ys return;
    }
    g.shortestPath(b);
}

signed main()
{
    fast_cin();
    ll t;
    cin >> t;
    for (ll it = 1; it <= t; it++)
    {
        solve();
    }
    return 0;
}