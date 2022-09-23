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
    ll mn = LLONG_MAX;
    map<ll,set<ll>> mp1;
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn,v[i]);
        mp1[v[i]].insert(v[i]);
    }
    ll gd = mn;
    vector<ll> a = v;
    sort(a.begin(), a.end());
    map<ll,set<ll>> mp;
    for(ll i = 0; i < a.size(); i++) mp[a[i]].insert(i);
    for(ll i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
    for(ll i = 0; i < a.size(); i++)
    {
        if(v[i]!=a[i])
        {
            bool flag = false;
            for(auto it: mp[v[i]])
            {
                cout << v[i] << " " << v[it] << endl;
                if(gcd(a[i],v[it])==gd)
                {
                    swap(a[i],v[it]);
                    flag = true;
                    mp[v[i]].erase(it);
                    break;
                }
            }
            if(!flag)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    // for(auto it: mp)
    // {
    //     bool flag = false;
    //     for(auto x: it.second)
    //     {
    //         if(gcd(it.first,v[x])==gd)
    //         {
    //             swap(v[x],v[*mp1[it.first].begin()]);
    //             mp1[it.first].erase(x);
    //             mp1[v[x]].insert(*mp1[it.first].begin());
    //             flag = true;
    //         }
    //     }
    //     if(!flag)
    //     {
    //             cout << "NO" << endl;
    //             return;
    //     }
    // }
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