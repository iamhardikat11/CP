#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

// C++ implementation of the above approach
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pbds                                               \
    tree<pair<int, int>, null_type, less<pair<int, int> >, \
         rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
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

void countSmallerRight(vector<ll> arr, int n)
{
    pbds s;
    // stores the answer
    vector<ll> ans;
    for (ll i = n - 1; i >= 0; i--) {
        if (i == n - 1) { // for the last element answer is
                          // zero
            ans.push_back(0);
        }
        else { // insert number of the smaller elements
            // to the right of current element into the ans
            ans.push_back(i-s.order_of_key({ arr[i], i }));
        }
        // insert current element
        s.insert({ arr[i], i });
    }
 
    reverse(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << " ";
}
void solve(){
    ll n,k;
    cin >> n>>k;
    vector<ll> v(n);
    forn(i,n)
    {   
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    countSmallerRight(v, n);
    reverse(v.begin(), v.end());
    ll a = 0;
    ll b = 1;
    for(ll ch: v)
    {
        if(ch == b)
        {
            b++;
            a++;
        }
    }
    ll s = n-a;
    if(s%k==0) cout << s/k << endl;
    else cout << s/k+1 << endl;
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