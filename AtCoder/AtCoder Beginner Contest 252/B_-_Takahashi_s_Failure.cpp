#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //freopen("error.txt","w",stderr);
    int N,K;
    cin >> N >> K;
    vector<int> A(N),B(K);
    int mx = INT_MIN;
    for(int i=0;i<N;i++) {
        cin >> A[i];
        mx = max(mx,A[i]);
    }
    for(int i=0;i<K;i++) cin >> B[i];
    map<int,int> mp;
    for(int i=0;i<N;i++)
    {
        if(A[i]==mx) mp[i+1]++;
    }
    int flag = 0;
    for(int i=0;i<K;i++)
    {
        if(mp[B[i]]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}