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
    vector<ll> a(4,0);
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a.begin(), a.end());
    if(a[3]==a[0]+a[1]+a[2] || a[1]+a[2]==a[3]+a[0] || a[1]+a[3]==a[0]+a[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}