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
#define forn(i, n) for (int i = 0; i < int(n);i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,l;
    cin >> n >> l;
    vector<int> a(n);
    forn(i,n) cin>>a[i];
    sort(all(a));
    int pos1=0, pos2=0;
    if(n==1)
    {
        printf("%.10lf\n", a[0] > l-a[0]?(double)a[0]:(double)l-a[0]);
        return 0;
    }
    if(a[0]!=0)
    {
        pos1=1;
    }
    if(a[a.size()-1]!=l)
    {
        pos2 = 1;
    }
    double mx = 0.0;
    for(int i=0;i<a.size()-1;i++)
    {
        if(i==0 && pos1 && a[1]>=mx) {
            mx = a[0];
            continue;
        }
        mx = max((a[i+1]-a[i])/2.0,mx);
    }
    if(pos2 && l-a[a.size()-1]>=mx) {
            mx = l-a[a.size()-1];
    }
    printf("%.10lf\n",mx);
    return 0;
}   