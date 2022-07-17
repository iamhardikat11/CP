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
 
bool cmp1(p32 a, p32 b)
{
    if(a.second < b.second) return true;
    if(a.second==b.second)
    {
        return a.first > b.first;
    }
    return false;
}
void solve(){
    int N,X,Y,Z;
    cin >> N >> X >> Y >> Z;
    vector<p32> A(N);
    vector<p32> B(N);
    vector<p32> C(N);
    for(int i=0;i<N;i++){
        A[i].first = i+1;
        cin >> A[i].second;
    }
    for(int i=0;i<N;i++){
        B[i].first = i+1;
        cin >> B[i].second;
    }
    for(int i=0;i<N;i++){
        C[i].first = i+1;
        C[i].second = A[i].second+B[i].second;
    }
    sort(A.begin(),A.end(),cmp1);
    sort(B.begin(),B.end(),cmp1);
    sort(C.begin(),C.end(),cmp1);
    v32 visit(N,0);
    // for(int i=0;i<N;i++){
    //     cout << B[i].first << " " << B[i].second << endl;
    // }
    for(int i=N-1;i>=0;i--)
    {
        if(X)
        {
            visit[A[i].first-1] = 1;
        }
        else
        {
            break;
        }
        X--;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(Y)
        {
            if(visit[B[i].first-1]==0)
            {
                visit[B[i].first-1] = 1;
            }
            else
            {
                continue;
            }
        }
        else
        {
            break;
        }
        Y--;
    }
    for(int i=N-1;i>=0;i--)
    {
        if(Z)
        {
            if(visit[C[i].first-1]==0)
            {
                visit[C[i].first-1] = 1;
            }
            else
            {
                continue;
            }
        }
        else
        {
            break;
        }
        Z--;
    }
    for(int i=0;i<N;i++)
    {
        if(visit[i]) cout << i+1 << endl;
    }
}
int main()
{
 fast_cin();
 solve();
 return 0;
}