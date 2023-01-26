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

int getRightMostSetBit(int n)
{
    if (n == 0)
        return 0;
    return log2(n & -n) + 1;
}
int posOfRightMostDiffBit(int m, int n)
{
    return getRightMostSetBit(m ^ n);
}

ll bitPos(ll n1, ll n2)
{
    // return zero for equal number
    if (n1 == n2)
        return 0;
 
    /** find the 1st dis-similar bit **/
    // count bit length of n1 and n2
    ll bitCount1 = (ll)floor((ld)log2(n1)) + 1;
    ll bitCount2 = (ll)floor((ld)log2(n2)) + 1;
 
    // find bit difference and maxBit
    ll bitDiff = abs(bitCount1 - bitCount2);
    ll maxBitCount = max(bitCount1, bitCount2);
    if (bitCount1 > bitCount2)
        n2 = n2 * pow(2, bitDiff);
    else
        n1 = n1 * pow(2, bitDiff);
    ll xorValue = (n1 ^ n2);
    ll bitCountXorValue = (ll)floor((ld)log2(xorValue)) + 1;
    ll disSimilarBitPosition = maxBitCount - bitCountXorValue + 1;
    return disSimilarBitPosition;
}
void solve(){
    // x = n & (n+1) & (n+2) & ... & (n+r-1)
    // n is even
    int64_t n,x;
    cin >> n >> x;
    // 1010
    // 1000
    // 10100
    // 10000
    int64_t p = 0;
    int64_t m = n;
    while(m)
    {
        m/=2;
        p++;
    }
    if((n * 4) < x) cout << -1 << endl;
    else if((x * 4) < n) cout << (((int64_t)1) << (p)) << endl;
    else cout << n + abs(n-x) << endl;
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