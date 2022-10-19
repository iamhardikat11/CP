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
    string s;
    cin >> s;
    string p = "";
    bool flag = false;
    for(int i=0;i<n;i++){
        if(s[i]=='1' or flag){
            flag=true;
            p.push_back(s[i]);
        }
    }
    if(p.size()==0)
    {
        cout << 0 << endl;
        return;
    }
    s = p;
    n = s.size();
    p = "";
    ll o = 0;
    ll a=0,b=0;
    forsn(i,2,n+1){
        ll x = n-o+1;
        ll y = n-i+1;
        forsn(j,min(x,y),n+1) {
            if(s[j-1]=='0')
                a = (j>=x) ? (int)(s[j-x]=='1') : 0;
                b = (j>=y) ? (int)(s[j-y]=='1') : 0;
                if(a<b)
                    o=i;
                if(a!=b)
                    break;
        }
    }
    forsn(i, 1,n+1)
    {
        if((i>=n-o+1 && s[i-n+o+1]=='1') | (int(s[i-1])-48))
           p.push_back('1');
        else
            p.push_back('0');
    }
    cout << p << endl;
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