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
void solve() {
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B;
    for(int i = 0; i < N; i++) cin >> A[i];
    B = A;
    sort(B.begin(), B.end());
    for(int i=0;i<N-K;i++)
    {
        if(A[i]>A[i+K]) {
            int t = A[i];
            A[i] = A[i+K];
            A[i+K] = t;
        }
    }
    if(A==B) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //freopen("error.txt","w",stderr);
    solve();
}