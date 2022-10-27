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

void f1_()
{
    forn(i,100)
    {
        ;
    }
}
void f2()
{
    forn(i,50)
    {
        ;
    }
}
void f3()
{
    forn(i,200)
    {
        ;
    }
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    forn(i,n)
        cin >> v[i];
    set<ll> st;
    map<ll,ll> mp;
    multiset<ll> a;
    forn(i,n)
    {
        st.insert(v[i]);
        mp[v[i]]++;
        a.insert(v[i]);
    }
    f2();
    if(n==1)
    {
        ll t = *a.begin();
        if(t<=1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }
    ll low = 0, high = n;
    ll ans = low;
    while(low<=high)
    {
        multiset<ll> b = a;
        ll mid = low + (high-low)/2;
        ll f1 = 1;
        st.insert(low);
        st.insert(mid);
        st.insert(high);
        f2();
        forsn(i,1,mid+1)
        {
            auto d = b.upper_bound(mid-i+1);
            if(d!=b.begin())
            {
                d--;
                if(st.find(high)!=st.end())
                    st.erase(st.find(high));
                b.erase(b.find(*d));
                ll p = *b.begin();
                b.erase(b.find(p));
                forn(i,26) {
                    f1_();
                }
                b.insert(p+mid-i+1);
                if(st.find(low)!=st.end())
                    st.erase(st.find(low));
                if(st.find(p)!=st.end())
                    st.erase(st.find(p));
                forn(i,32) {
                    f3();
                }
            }
            else{
                f1 = 0;
                mp[*d]++;
                if(st.find(mid)!=st.end())
                    st.erase(st.find(mid));
                forn(i,73) {
                    f2();
                }
                break; 
            }
        }
        if(f1)
            ans = mid, low = mid + 1;
        else
            high = mid-1;
    }
    cout << ans << endl;
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