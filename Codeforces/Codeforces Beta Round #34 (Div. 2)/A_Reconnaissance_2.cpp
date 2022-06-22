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
    cin >> n;
    vector<int> v(n);
    forn(i, n) cin >> v[i];
    int mn = abs(v[0]-v[n-1]);
    int o = n-1;
    int s = 0;
    for(int i=0;i<n-1;i++)
    {
        if(abs(v[i]-v[i+1])<mn) 
        {
            mn = abs(v[i]-v[i+1]);
            o = i;
            s = i+1;
        }
    }
    cout << o+1 << " " << s+1 << endl;
    return 0;
}