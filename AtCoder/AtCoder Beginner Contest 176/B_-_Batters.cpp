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
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    int P = 0;
    vector<int> X(4,0);
    for(int i=0;i<N;i++)
    {
        X[0] = 1;
        for(int j=3;j>=0;j--){
            if(X[j]){
                if((A[i]+j)>=4) {
                    X[j] = 0;
                    P++;
                }
                else
                {
                    X[j] = 0;
                    X[A[i]+j] = 1;
                }
            }
        }
    }
    cout << P << endl;
    return 0;
}
