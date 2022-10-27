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
    vector<ll> v(n);
    ll sum = 0;
    forn(i,n)
    {
        cin >> v[i];
        sum += v[i];
    }
    if(sum%n==0)
    {
        ll target = sum/n;
        bool flag = true;
        forn(i,n)
        {
            if(v[i]!=target)
            {
                flag  = false;
                break;
            }
        }
        if(flag)
        {
            cout << 0 << endl;
        }
        else
        {
            ll sum_less = 0;
            multiset<ll,greater<ll>> sum_gre;
            forn(i,n)
            {
                if(v[i]<target)
                    sum_less += (target-v[i]);
                else if(v[i]>target)
                   sum_gre.insert(v[i]-target);
            } 
            ll cnt = 0;
            ll sum_g = 0;
            for(auto it: sum_gre)
            {
                sum_g += it;
                cnt++;
                if(sum_g>=sum_less)
                {
                    cout << cnt << endl;
                    return;
                }
            }
            cout << -1 << endl;
        }
    }
    else
        cout << -1 << endl;
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