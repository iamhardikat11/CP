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
    int n,m;
    cin >> n >> m;
    int k = (n*(n+1))/2;
    if(k==m) cout << 0 << endl;
    else if(k>m)
    {
        while(k>m)
        {
            k-=n;
            n--;
        }
        cout << m-k << endl;
    }
    else
    {
        m = m%k;
        int r = 1;
        while(m>0)
        {
            if(m>=r)
                m-=r;
            else
               break;
            r++;
        }
        cout << m << endl;
    }
    return 0;
}