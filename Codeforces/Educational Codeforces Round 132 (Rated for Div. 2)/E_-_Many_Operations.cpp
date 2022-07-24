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
 

void solve(){
    ll N,C;
    cin >> N >> C;
    ll X = C;
    ll t,a;
    vector<ll> s(N);
    vector<pair<ll,ll>> T(N);
    for(ll i=0; i<N; i++) {
        cin >> t >> a;
        T[i].first = t;
        T[i].second = a;
    }
    s[0] = T[0].second;
    for(int i=1;i<N;i++)
    {
        if(T[i].first==1)
        {
            s[i] = s[i-1]&T[i].second;
        }
        if(T[i].first==2)
        {
            s[i] = s[i-1]|T[i].second;
        }
        if(T[i].first==3)
        {
            s[i] = s[i-1]^T[i].second;
        }
    }
    for(int i=0;i<N; i++) cout << s[i] << " ";
    cout << endl;
    ll c = s[0];
    for(int i=0;i<N;i++)
    {
        
        if(T[0].first==1)
        {
            X = X&c;
        }
        if(T[0].first==2)
        {
            X = X|c;
        }
        if(T[0].first==3)
        {
            X = X^c;
        }
        cout << X << endl;
        if(i!=N-1)
         c = c^s[i+1];
    }
    cout << endl;
}
int main()
{
 fast_cin();
 solve();
 return 0;
}