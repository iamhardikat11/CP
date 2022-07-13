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
    int N, K;
    cin >> N >> K;
    vector<vector<int>> v(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> v[i][j];
        }
    }
    int mn = INT_MAX;
    pair<int, int> p = {-1, -1};
    for (int i = 0; i <= N - K; i++)
    {
        for (int j = 0; j <= N - K; j++)
        {
            int mx = INT_MIN;
            for (int x = 0; x < K; i++)
            {
                for (int y = 0; y < K; y++)
                    mx = max(mx, v[i + x][j + y]);
            }
            if (mx < mn)
            {
                p.first = i;
                p.second = j;
                mn = mx; 
            }
        }
    }
    // set<int> height;
    // for (int x = p.first; x < p.first + K; x++)
    // {
    //     for (int y = p.second; y < p.second + K; y++)
    //         height.insert(v[x][y]);
    // }
    // auto it = height.end();
    // it--;
    // int k = floor((K * K) / 2);
    // for (int r = 0; r < k; r++)
    //     it--;
    // mn = min(mn, (*it));
    // cout << mn << endl;
    return 0;
}