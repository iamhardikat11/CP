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
    ll n;
    cin >> n;
    if(n*(n+1)%4==0)
    {
        ll target = (n*(n+1))/4;
        set<ll> ans;
        ll i = 0;
        ll sum = 0;
        while(i<=n/2)
        {
            ans.insert(n-i);
            sum += n-i;
            if(sum==target)
            {
                break;
            }
            ans.insert(i+1);
            sum += i+1;
            if(sum==target)
            {
                break;
            }
            i++;
        }
        if(sum==target)
        {
            cout << "YES" << endl;
            set<ll> ans2;
            ll i = 1;
            cout << ans.size() << endl;
            map<ll,ll> mp;
            for(auto it: ans)
            {
                cout << it << " ";
                mp[it]=1;
                while(i<it && i<=n)
                {
                    if(!mp[i])
                        ans2.insert(i);
                    i++;
                }
            }
            cout << endl << ans2.size() << endl;
            for(auto it: ans2)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
 fast_cin();
 ll t;
 //cin >> t;
 t = 1;
 {
    solve();
 }
 return 0;
}