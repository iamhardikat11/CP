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

map<pair<ll,ll>, ll> d;
ll shortest_cost_path(map<pair<ll,ll>,map<pair<ll,ll>,ll>> adj_list, ll n)
{
    int u,i;
    d[{0,1}]=0;
    pair<int,int>p;
    set<pair<pair<int,int>,int>>st;
    for(ll i=1;i<=n;i++)
    {
        st.insert()
    }
        
    while(!st.empty()){
            u=st.begin()->second;
            mark[u]=true;
            st.erase(st.begin());
            for(i=0;i<graph[u].size();i++){
                p=graph[u][i];
                if(d[u]+p.second<d[p.first] && mark[p.first]==false){
                    st.erase(make_pair(d[p.first],p.first));
                    d[p.first]=d[u]+p.second;
                    st.insert(make_pair(d[p.first],p.first));
            }
        }
    }
}
void solve(ll n)
{
    vector<vector<ll>> graph(n, vector<ll> (3));
    for(ll i = 0; i < n; i++)
        cin >> graph[i][0] >> graph[i][1] >> graph[i][2];
    ll cost = graph[0][1];
    if(n==1)
    {
        cout << cost << endl;
        return;
    }
    else
    {
        map<pair<ll,ll>,map<pair<ll,ll>,ll>> adj_list;
        for(ll i = 0; i < n-1; i++)
        {
            adj_list[{i,0}][{i,1}] = graph[i][1];
            adj_list[{i,0}][{i+1,0}] = graph[i+1][0];
            adj_list[{i,0}][{i+1,1}] = graph[i+1][1];
            adj_list[{i,1}][{i+1,0}] = graph[i+1][0];
            adj_list[{i,1}][{i+1,1}] = graph[i+1][1];
            adj_list[{i,1}][{i+1,2}] = graph[i+1][2];
            adj_list[{i,1}][{i,2}] = graph[i][2];
            adj_list[{i,2}][{i+1,1}] = graph[i+1][1];
            adj_list[{i,2}][{i+1,2}] = graph[i+1][2];
        }
        adj_list[{n-1,0}][{}]
        shortest_cost_path(adj_list, n);
    }
}
int main()
{
 fast_cin();
 ll n = -1;
 ll t = 1;
 while(1)
 {
    cin >> n;
    if(n==0)
    {
        break;
    }
    cout << t << ".";
    t++;
    solve(n);
 }
 return 0;
}