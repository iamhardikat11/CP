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


void solve(){
    ll n,q;
    cin >> n >> q;
    vector<ll> v(n);
    vector<ll> pref_sum(n,0);
    vector<ll> pref_xor(n,0);
    forn(i,n) {
        cin >> v[i];
        if(i==0)
        {
            pref_sum[i] = v[i];
            pref_xor[i] = v[i];
        }
        else
        {
            pref_sum[i] = pref_sum[i-1]+v[i];
            pref_xor[i] = pref_xor[i-1]^v[i];
        }
    }
    ll L,R;
    cin >> L >> R;
    L--;
    R--;
    ll mx = pref_sum[R]-pref_xor[R];
    for(ll l = 0;l<n;l++)
    {
        for(ll r = l;r<n;r++)
        {
            if(l>0)
            {
                if(pref_sum[r]-pref_sum[l-1]-(pref_xor[l-1]^pref_xor[r]) == mx && r-l+1 < R-L+1)
                {
                    mx = pref_sum[r]-pref_sum[l-1]-(pref_xor[l-1]^pref_xor[r]);
                    L = l;
                    R = r;
                }
                else if(pref_sum[r]-pref_sum[l-1]-(pref_xor[l-1]^pref_xor[r]) > mx)
                {
                    mx = pref_sum[r]-pref_sum[l-1]-(pref_xor[l-1]^pref_xor[r]);
                    L = l;
                    R = r; 
                }
            }
            else
            {
                if(pref_sum[r]-pref_sum[r] == mx && r < R)
                {
                    mx =pref_sum[r]-pref_sum[r];
                    L = l;
                    R = r;
                }
                else if(pref_sum[r]-pref_sum[r] > mx)
                {
                    mx =pref_sum[r]-pref_sum[r];
                    L = l;
                    R = r;  
                }
            }
        }
    }
    cout << L+1 << " " << R+1 << endl;
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