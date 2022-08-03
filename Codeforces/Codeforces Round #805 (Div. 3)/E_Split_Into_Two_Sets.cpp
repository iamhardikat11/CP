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
 
void dfs(map<int, set<int>> & adj , ll u, ll parent, vector<bool>& visited, int &cnt){
    if(visited[u]) return;
    visited[u] = true; 
    cnt++;
    for(auto it = adj[u].begin(); it != adj[u].end(); it++){ 
        if(*it == parent)
            continue;
        if(visited[*it])
            continue;
    dfs(adj ,*it, u, visited, cnt);
    }
}
void solve(){
    int N;
    cin >> N;
    map<int,int> mp;
    map<int,set<int>> adj;
    int a,b;
    bool t = true;
    for(ll i = 0; i < N; i++){
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
        if(a==b) t = false;
        adj[a].insert(b);
        adj[b].insert(a);
    } 
    for(auto it = mp.begin(); it != mp.end(); it++) {if(it->second != 2){ t = false; break; }}
    if(!t){ cout << "NO\n"; return; }
    vector<bool> visited(N+1,false);
    for(int i=1;i<=N;i++)
    {
      int cnt = 0; 
      if(!visited[i]) dfs(adj , i,-1, visited, cnt);
      if(cnt%2){ t = false; break;}
    }
    if(t)
        cout<<"YES\n"; 
    else cout << "NO\n";  
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