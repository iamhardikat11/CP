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
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    forn(i,n) cin >> a[i];
    forn(i,n) cin >> b[i];
    bool flag = true;
    ll cnt = 0;
    map<ll,ll> m;
    vector<ll> idx; 
    forn(i,n)
    {
        if(a[i]>b[i]) {
            cout << "NO" << endl;
            return;
        }
        if(a[i]==b[i])
        {
                cnt++;
                m[i] = 1;
        }
        else
        {
            idx.push_back(i);
        }
    }
    if(cnt==n)
    {
        cout << "YES" << endl;
        return;
    }
    forn(i,n-1)
    {
        if(m.find(i)==m.end() && a[i] < b[i] && a[i] > a[i+1]+1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(m.find(n-1)==m.end() && a[n-1] < b[n-1] && a[n-1] > b[0]+1)
    {
        cout << "NO" << endl;
        return;
    }
    forn(i,n-1)
    {
        if(m.find(i)==m.end() && a[i] < b[i] && b[i] > b[i+1] + 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(m.find(n-1)==m.end() && a[n-1] < b[n-1] && b[n-1] > b[0]+1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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