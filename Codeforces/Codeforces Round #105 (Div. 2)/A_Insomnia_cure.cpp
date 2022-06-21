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
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    if(k==1 || l==1 || m==1 || n==1) cout << d << endl;
    else
    {
        set<int> f;
        int idx = 2;
        int y = k;
        while(y<=d)
        {
            f.insert(y);
            y=k*idx;
            idx++;
        } 
        idx = 2;
        y = l;
        while(y<=d)
        {
            f.insert(y);
            y=l*idx;
            idx++;
        }
        idx =2;
        y = m;
        while(y<=d)
        {
            f.insert(y);
            y=m*idx;
            idx++;
        }
        idx = 2;
        y = n; 
        while(y<=d)
        {
            f.insert(y);
            y=n*idx;
            idx++;
        }
        cout << f.size() << endl;
    }
    return 0;
}