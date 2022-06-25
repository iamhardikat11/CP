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
    ll N,A,B,P,Q,R,S;
    cin >> N >> A >> B >> P >> Q >> R >> S;
    int n = Q-P+1;
    int s = S-R+1;
    vector<string> v(n,string(s,'.'));
    for(int i=max(1ll-A,1ll-B);i<=min(N-A,N-B);i++) {
        if(A+i-P>=0 && A+i-Q<=0 &&  B+i-R>=0 && B+i-S<=0) 
        {
            int x = A-P+i;
            int y = B-R+i;
            v[x][y] = '#';
        }
    }
    for(int i=max(1ll-A,B-N);i<=min(N-A,B-1ll);i++) {
        if(A+i>=P && A+i<=Q && B-i>=R && B-i<=S) 
                v[A+i-P][B-i-R] = '#';
    }
    for(int i=0;i<Q-P+1;i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}