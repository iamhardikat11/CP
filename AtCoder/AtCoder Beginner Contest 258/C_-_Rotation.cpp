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
    int N,Q;
    cin >> N >> Q;
    string a;
    cin >> a;
    while(Q--)
    {
        int ch,x;
        cin >> ch >> x;
        if(ch==1)
        {
                string c = a.substr(a.size()-x,x);
                a = a.substr(0,a.size()-x);
                a = c+a;
        }
        if(ch==2)
        {
            cout << a[x-1] << endl;
        }
    }
    return 0;
}