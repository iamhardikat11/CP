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
    ll Rs,Rh;
    cin >> Rs >> Rh;
    ll N;
    cin >> N;
    vector<pair<ll,ll>> v1(N);
    set<ll> red,yellow;
    forn(i,N)
    {
        ll x,y;
        cin >> x >> y;
        ll distance = pow(x,2)+ pow(y,2);
        if(distance <= pow(Rs+Rh,2))
            red.insert(distance);
    }
    ll M;
    cin >> M;
    forn(i,M)
    {
        ll x,y;
        cin >> x >> y;
        ll distance = pow(x,2)+ pow(y,2);
        if(distance <= pow(Rs+Rh,2))
            yellow.insert(distance);
    }
    if(red.size()==0)
    {
        cout << 0 << " " << yellow.size() << endl;
        return;
    }
    if(yellow.size()==0)
    {
        cout << red.size() << " " << 0 << endl; 
        return;
    }
    ll p=0,q=0;
    ll q1 = *red.begin();
    ll q2 = *yellow.begin();
    // cout << "////////////////////////////" << endl;
    // for(auto it: red)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
    // for(auto it: yellow)
    // {
    //     cout << it << " ";
    // }
    if(q1 < q2)
    {
        p = 0;
        auto it = red.begin();
        while(it!=red.end() && *it < q2)
        {
            ++it;
            p++;
        }
        cout << p << " " << 0 << endl;
    }
    else
    {
        q = 0;
        auto it = yellow.begin();
        while(it!=yellow.end() && *it < q1)
        {
            ++it;
            q++;
        }
        cout << 0 << " " << q << endl;
    }
}

int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    cout << "Case #" << it << ": ";
    solve();
 }
 return 0;
}