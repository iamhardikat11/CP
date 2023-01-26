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
unordered_map<ll,map<ll,ll>> graph;
vector<ll> prime_factors(ll n) {
    vector<ll> factors;
    ll i = 2;
    while (i * i <= n) {
        if (n % i) {
            i++;
        } 
        else {
            n /= i;
            factors.push_back(i);
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}

void print_index_pairs(vector<ll> arr, ll n) {
    vector<vector<ll>> prime_factors_list;
    forn(i,n) prime_factors_list.push_back(prime_factors(arr[i]));
    forn(i,n){
        forsn(j,i+1,n){
            ll gcd = 1;
            for (ll factor : set<ll>(prime_factors_list[i].begin(), prime_factors_list[i].end())) {
                if (find(prime_factors_list[j].begin(), prime_factors_list[j].end(), factor) != prime_factors_list[j].end()) 
                    gcd *= factor;
            }
            if (gcd != 1)
                graph[i][j] = 1;
        }
    }
}
ll minDist(vector<ll> &dist, bool sptSet[], ll V)
{
    ll min = INT_MAX, min_index;
    for (ll v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
 
    return min_index;
}
void init(ll n)
{
    map<ll,ll> mp;
    mp.clear();
    forn(i,n)
    {
        graph[i] = mp;
    }
}
void dijkstra(ll src, ll dst, ll V)
{
    vector<ll> distance(V, LLONG_MAX);
    bool sptSet[V]; 
    for (int i = 0; i < V; i++)
        distance[i] = INF, sptSet[i] = false;
    distance[src] = 0;
    forn(count,V-1){
        ll u = minDist(distance, sptSet, V);
        sptSet[u] = true;
        forn(v,V)
        {
            if (!sptSet[v] && distance[u] != INF && distance[u] + graph[u][v] < distance[v]) 
                distance[v] = distance[u] + graph[u][v];
        }
    }
    cout << distance[dst] << endl;
}
void solve(){
    ll n;
    cin >> n;
    init(n);
    vector<ll> v(n);
    forn(i,n) cin >> v[i];
    print_index_pairs(v, n);
    ll s,t;
    cin >> s >> t;
    s--;
    t--;
    dijkstra(s, t, n);
}

int main()
{
 fast_cin();
 ll t;
 t = 1;
 for(int it=1;it<=t;it++) {
    solve();
 }
 return 0;
}