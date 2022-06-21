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
    int mx = INT_MIN;
    int mn = INT_MAX;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        mx = max(mx,v[i]);
        mn = min(mn,v[i]);
    }
    int cnt=0;
    int idx1=-1;
    int idx2=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==mx)
        {
            cnt+=i;
            idx1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==mn)
        {
            cnt+=(n-1-i);
            idx2=i;
            break;
        }
    }
    if(idx1==n-1 || idx2==0) cnt--;
    cout << cnt << endl;
    return 0;
}