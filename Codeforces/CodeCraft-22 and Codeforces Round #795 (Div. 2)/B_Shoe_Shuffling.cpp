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
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    set<int> a;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        a.insert(v[i]);
        m[v[i]]++;
    }
    int f=0;
    for(auto it = a.begin(); it != a.end(); it++)
    {
        if(m[*it]==1)
        {
            f=1;
            break;
        }
    }
    if(f) cout << -1 << endl;
    else
    {
        int i=1;
        for(auto it = a.begin(); it != a.end(); it++)
        {
            if(a.size()==1)
            {
                cout << n << " ";
                for(int j=1;j<n;j++) cout << j << " ";
                cout << endl;
            }
            else{
                int k = m[*it];
                int m=i;
                for(int j=i+k;j>=m;j--)
                {
                    cout << k << " ";
                    k--;
                }
                i+=k;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //freopen("error.txt","w",stderr);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
       solve();
    }
    return 0;
}