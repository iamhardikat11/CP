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

void subarray(vector<ll> arr, int n)
{
	int ans = 1, temp = 1;
    int l = -1, r = -1;
    int ll = 1,rr = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i - 1]) 
		{
            ++temp;
            if(l==-1) l = i-1;
        }	
		else {
            if(ans < temp)
            {
                ll = l;
                rr = i-1;
                ans = max(ans, temp);
            }
			temp = 1;
            l = -1;
            r = -1;
		}
	}
    if(ans < temp)
    {
        ans = temp;
        ll = l;
        rr = n-1;
    }
    if(ll == -1 && rr == -1)
    {
        cout << 1 << " " << n << endl;
    }
    else
    {
        ll++;
        rr++;
        int j = ll-1;
        int k = rr+1;
        map<int,int> mp;
        int ans = k-j+1;
        mp[arr[ll]] = (rr-ll+1);
        bool flag = true;
        while(j>1 && flag)
        {
            mp[arr[j]]++;
            if(k-j+1-mp.size()>ans)
            {
                ans = k-j+1-mp.size();
                if(j>1) j--;
                else 
                {
                    flag = false;
                }
            }
            else
            	break;
        }
        flag = true;
        while(k<n && flag)
        {
            mp[arr[k]]++;
            if(k-j+1-mp.size()>ans)
            {
                ans = k-j+1-mp.size();
                if(k<n)
                    k++;
                else
                {
                    flag = false;
                }
            }
            else
            	break;
        }
        cout << j << " " << k << endl;
    }
}
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    forn(i,n) cin >> v[i];
    subarray(v,n);
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