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
map<int, bool> visited;
void dfs(map<int,list<int>> adj, vector<int> &z, int K, int v)
{
    visited[v] = true;
    for(auto it = adj[v].begin(); it != adj[v].end(); ++it)
    {
        if(!visited[*it])
        {
            if(K)
            {
                
                if(z[*it-1]==1)
                {
                    z[v-1] = 1;
                    z[*it-1] = 0;
                    K++;
                }
                else
                {
                    z[v-1] = 0;
                    z[*it-1] = 1;
                }
            }
            if(K==0)
            {
                z[v-1] = z[*it-1];
                return;
            }
            dfs(adj,z, K, *it);
        }
    }
}
void solve(){
    int N,K;
    cin >> N >> K;
    vector<int> x(N-1);
    map<int, list<int> > adj;
    for(int i=2;i<=N;i++){
        cin >> x[i-2];
        adj[x[i]].push_back(i);
    }
    vector<int> arr(N,0);
    int v = 0;
    dfs(adj, arr, K, v);
    for(int i=0;i<N;i++) cout << arr[i];
    cout << endl;
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