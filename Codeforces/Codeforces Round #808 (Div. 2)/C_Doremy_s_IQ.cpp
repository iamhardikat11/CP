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
int j=0;

void solve(){
    int n,q,x;
    cin >> n >> q;
    x = q;
    vector<int> arr(n);
    vector<int> store(n+1,0);
    vector<bool> check(n,false);
    map<int,vector<int>> m;
    for(int i=0;i<n; i++) {
        cin >> arr[i];
        m[arr[i]].push_back(i);
    }
    // vector<int> dp(n,0);
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>q) sum++;
        store[i] = sum;
    }
    string a="";
    for(int i=0;i<n; i++) {
        if(arr[i]<=q) a.push_back('1');
        else
        {
            if(q<=0) a.push_back('0');
            else
            {
                if(store[i]<=q)
                {
                    q--;
                    a.push_back('1');
                }
                else
                {
                    a.push_back('0');
                }
            }
        }
    }
    for(auto it = m.begin(); it != m.end(); it++)
    {
        if(q)
        {
            for(int i=0;i<(*it).second.size(); i++)
            {
                check[(*it).second[i]] = true;
            }
        }
        if(q < (*it).first) q--;
    }
    for(int i=0;i<n;i++)
    {
        if(check[i]==true)
        {
            if(!x) check[i] = false;
            if(arr[i]>x) x--;
        }
    }
    for(int i=0;i<n;i++) cout << check[i];
    cout << endl;
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