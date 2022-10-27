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


void solve(){
    string s;
    cin >> s;
    map<char,int> mp;
    int n = s.size();
    forn(i,n)
        mp[s[i]]++;
    if(n%2==0)
    {
        for(auto it: mp)
        {
            if(it.second % 2 != 0)
            {
                cout << "NO SOLUTION" <<endl;
                return; 
            }
        }
        vector<char> st(n);
        int i = 0;
        for(auto it: mp)
        {
            int j;
            for(j=i;(j-i)<it.second/2;j++)
            {
                st[j] = it.first;
                st[n-1-j] = it.first;
            }
            i = j;
        }
        forn(i,st.size())
            cout << st[i];
        cout << endl;
    }
    else
    {
        int c = 0;
        char ch = 'A';
        for(auto it: mp)
        {
            if(it.second % 2 == 0)
            {
                ;
            }
            else 
            {
                c++;
                ch = it.first;
            }
        }
        if(c!=1)
        {
            cout << "NO SOLUTION" << endl;
            return;
        }
        int k = mp[ch];
        mp[ch] = 0;
        vector<char> st(n);
        int i = 0;
        for(auto it: mp)
        {
            int j;
            for(j=i;(j-i)<it.second/2;j++)
            {
                st[j] = it.first;
                st[n-1-j] = it.first;
            }
            i = j;
        }
        for(int j=i;(j-i)<k;j++)
             st[j] = ch;
        forn(i,st.size())
            cout << st[i];
        cout << endl;  
    }
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