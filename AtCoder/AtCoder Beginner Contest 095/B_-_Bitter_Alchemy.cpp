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
    int N,X;
    cin >> N >> X;
    vector<int> M(N);
    int sum=0;
    int mn = INT_MAX;
    for(int i=0;i<N;i++) {
        cin >> M[i];
        sum+=M[i];
        mn = min(mn,M[i]);
    }
    sum = X-sum;
    cout << N+sum/mn << endl;
    return 0;
}