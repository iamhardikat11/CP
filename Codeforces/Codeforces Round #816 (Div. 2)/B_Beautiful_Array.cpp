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
typedef pair<ll,ll> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll> > vv32;
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


void solve(){
    ll n,k,s,b;
    cin >> n >> k >> b >> s;
    ll x = s-(b+1)*k+1;
    if(s < k*b || s > n*(k-1) + k*b) cout << -1 << endl;
    else
    {
        
        if(x<0)
        {
            vector<ll> ans;
                cout << b*k << " ";
                ll w = s-b*k;
                ans.push_back(b*k);
                for(int i=1;i<n;i++)
                {
                    if(w-k>=-1) {
                        ans.push_back(k-1);
                        cout << k-1 << " ";
                        w-=(k-1);
                    }
                    else
                    {
                        cout << w << " ";
                        w = 0;
                    }
                }
        }
        else
        {
            vector<ll> ans;
            cout << (b+1)*k-1 << " ";
            ans.push_back(b+1*k-1);
            for(int i=1;i<n;i++)
            {
                if(x-k>=-1) {
                    cout << k-1 << " ";
                    x-=(k-1);
                }
                else
                {
                    cout << x << " ";
                    x = 0;
                }
            }
        }
        cout << "\n";
    }
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(ll it=1;it<=t;it++) {
    solve();
 }
 return 0;
}