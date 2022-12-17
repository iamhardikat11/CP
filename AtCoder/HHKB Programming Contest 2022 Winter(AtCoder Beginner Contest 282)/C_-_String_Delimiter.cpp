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
    string s;
    cin >> n >> s;
    set<ll> pos;
    forn(i,n)
    {
        if(s[i]=='\"')
            pos.insert(i);
    }
    map<ll,ll> mp;
    ll c = 0;
    for(auto it: pos)
    {
        mp[it] = c%2;
        c++;
    }
    if(pos.size()==0)
    {
        forn(i,n)
        {
            if(s[i]==',')
            {
                s[i] = '.';
            }
        }
        cout << s << endl;
    }
    else
    {
        forn(i,n)
        {
            if(s[i]==',')
            {
                auto it = pos.end();
                it--;
                if(i < *pos.begin() || i >= *it)
                {
                    s[i] = '.';
                }
            }
            if(s[i]==',')
            {
                auto x = pos.lower_bound(i);
                if (x != pos.begin())
                    x--;
                auto y = pos.upper_bound(i);
                if(mp[*x] == 1  && mp[*y] == 0)
                {
                    s[i] = '.';
                }
            }
        }
        cout << s << endl;
    }
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