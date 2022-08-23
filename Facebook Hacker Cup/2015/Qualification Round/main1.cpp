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
    string p;
    cin >> p;
    if(p.size()==1 && p[0]==0)
        cout << 0 << " " << 0 << endl;
    else
    {
        int mx = -1;
        int idx1 = -1;
        int mn = 10;
        int idx2 = -1;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]-'0' > mx && p[i]!='0'){
                mx = p[i]-'0';
                idx1 = i;
            }
            if(p[i]-'0' <= mn && p[i]!='0'){
                mn = p[i]-'0';
                idx2 = i;
            }
        }
        string s = p;
        string l = p;
        if(idx2!=-1 && p[idx2] < p[0])
        {
            char temp = s[idx2];
            s[idx2] = s[0];
            s[0] = temp;
        }
        if(idx1!=-1 && p[idx1] > p[0])
        {
            char temp = l[idx1];
            l[idx1] = l[0];
            l[0] = temp;
        }
        cout << s << " " << l;
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
    cout << endl;
 }
 return 0;
}