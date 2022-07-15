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
    int n;
    vector<int> v(3);
    cin >> n >> v[0] >> v[1] >> v[2];
    int mx = INT_MIN;
    for(int i=0;i<=n/v[0];i++)
    {
        for(int j=0;j<=n/v[1];j++)
        {
            if((n-i*v[0]-j*v[1]) >=0 && (n-i*v[0]-j*v[1])%v[2]==0) {
                mx = max(mx,i+j+((n-i*v[0]-j*v[1])/v[2]));
            }
        }
    }
    cout << mx << endl;
    return 0;
}