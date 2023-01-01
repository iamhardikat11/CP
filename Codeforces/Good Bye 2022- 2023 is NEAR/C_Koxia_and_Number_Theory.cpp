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

bool prime[200005];
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
        for (int i = p * p; i <= n; i += p)
         prime[i] = false;
    }
     }
}
bool solve1(ll k, ll n, vector<ll> arr)
{
    vector<ll> v(k, 0);
    ll i;
    forn(i,n)
        v[arr[i]%k]++;
    forn(i,k)
        if(v[i] <= 1)
            return true;
    return false;
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll,ll> mp;
    bool flag = false;
    string ans = "YES";
    ll even = 0;
    forn(i,n) {
        cin >> v[i];
        mp[v[i]]++;
        if(mp[v[i]] >= 2)
        {
            flag = true;
        }
        even += (v[i]%2);
    } 
    if(flag) {
        cout << "NO" << endl;
        return;
    }
    else
    {
        if(even!=1 && even!=n-1) ans = "NO";
        else {
            // for(ll x=2;x<sizeof(prime)/sizeof(prime[0]);x++)
            // {
            //     if(!prime[x])
            //     {
            //         bool flag = true;
            //         for(ll i=0;i<n;i++)
            //         {
            //             for(ll j=i+1;j<n;j++)
            //             {
            //                 if(gcd(x+v[i], x+v[j])!= 1)
            //                 {
            //                     flag = false;
            //                     break;
            //                 }
            //             }
            //             if(!flag)
            //             {
            //                 break;
            //             }
            //         }
            //         if(flag)
            //         {
            //             ans = "YES";
            //         }
            //     }
            // }
            ans = "NO";
        }
    }
    for(ll i = 2; i <= n; i++)
    {
        if(!solve1(i, n, v))
        {
            cout<< "NO" << endl;
            return;    
        }
    }
    cout<< "YES" << endl;
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
