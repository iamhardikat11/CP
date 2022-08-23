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


void solve(){
    int x;
    cin >> x;
    vector<int> v;
    vector<string> p;
    int sum = 9;
    string t = "9";
    for(int i=8;i>=1;i--)
    {
        v.push_back(sum);
        p.push_back(t);
        sum+=i;
        t=to_string(i)+t;
    }
    if(x<=9)
        cout << x << endl;
    else if(x>45)
    {
        cout << -1 << endl;
    }
    else
    {
        bool f = false;
        for(int i=0;i<v.size()-1;i++)
        {
            if(x>=v[i] && x<=v[i+1])
            {
                f = true;
                if(x-v[i]!=0)
                    cout << x-v[i] << p[i] << endl;
                else
                    cout << p[i] << endl;
                break;
            }
        }
        if(!f)
        {
            cout << 1 << p[p.size()-1] << endl;
        }
    }
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