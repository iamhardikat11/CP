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
    ll N,K;
    cin >> N >> K;
    int cnt = 0;
    if(K%10==0) {
        cout << 0 << endl;
        return 0;
    }
    if(K<=N && K>9) cnt++;
    string x = to_string(K);
    reverse(x.begin(), x.end());
    ll k_ = stoll(x); 
    if(k_ < K) {
        cout << 0 << endl;
        return 0;
    }
    while(K<=N)
    {
        ll k = K;
        while(k%10==0)
        {
            k = k/10;
        }
        string x = to_string(k);
        reverse(x.begin(), x.end());
        ll k_ = stoll(x);
        if(k_<=N) cnt++;
        K = K*10;
    }
    k_ *= 10;
    K = k_;
    while(K<=N)
    {
        ll k = K;
        while(k%10==0)
        {
            k = k/10;
        }
        string x = to_string(k);
        reverse(x.begin(), x.end());
        ll k_ = stoll(x);
        if(k_<=N) cnt++;
        K = K*10;
    }
    cout << cnt << endl;
    return 0;
}