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
vector<vector<int>> a,b;
bool check(vector<int> rows, vector<int> cols)
{

    for(int i=0;i<rows.size();i++)
    {
        for(int j=0;j<cols.size();j++)
        {
            if(a[rows[i]][cols[j]]!=b[i][j]) return false;
        }
    }
    return true;
}
void solve(){
    int H1,W1;
    cin >> H1 >> W1;
     a.resize(H1,vector<int> (W1));
    for(int i = 0; i < H1; i++){
        for(int j = 0; j < W1; j++){
            cin >> a[i][j];
        }
    }
    int H2,W2;
    cin >> H2 >> W2;
    b.resize(H2,vector<int> (W2));
    for(int i = 0; i < H2; i++){
        for(int j = 0; j < W2; j++){
            cin >> b[i][j];
        }
    }
    vector<vector<set<pair<int,int>>>> A(H1, vector<set<pair<int,int>>> (W1));
    for(int i=0;i<H2;i++)
    {
        for(int j=0;j<W2;j++)
        {
            for(int x=0;x<H1;x++)
            {
                for(int y=0; y < W1; y++)
                {
                    if(a[x][y]==b[i][j])
                    {
                        A[i][j].insert({x,y});
                    }
                }
            }
        }
    }
    
}
int main()
{
 fast_cin();
 solve();
 return 0;
}