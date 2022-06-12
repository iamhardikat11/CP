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
    int N,M,X;
    cin >> N >> M >> X;
    vector<int> A(M);
    vector<int> tax(N+1,0);
    for(int i = 0; i < M; i++) {
        cin >> A[i];
        tax[A[i]] = 1;
    }
    int cost1 = 0;
    int cost2 = 0;
    for(int i=X; i < N; i++) {  
        cost1+=tax[i];
    }
    for(int i=X;i>=0;i--) {
        cost2+=tax[i];
    }
    cout << min(cost1,cost2) << endl;
    return 0;
}