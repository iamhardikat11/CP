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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, a, b;
    cin >> N >> a >> b;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int x=N-1; x>=1; x--)
    {
        int i = x-1;
        int j = x;
        while (v[i]+a<=v[j]-b)
        {
            v[i] += a;
            v[j] -= b;
            i--;
        }
        for(int i = 0; i < N; i++) cout << v[i] << " ";
            cout << endl;
    }
    cout << v[0] << endl;
    return 0;
}