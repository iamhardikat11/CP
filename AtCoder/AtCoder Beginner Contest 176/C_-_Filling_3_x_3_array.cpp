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
    vector<int> h(3);
    vector<int> w(3);
    for (int i = 0; i < 3; i++)
        cin >> h[i];
    for (int i = 0; i < 3; i++)
        cin >> w[i];
    int cnt = 0;
    for (int a1 = 1; a1 <= 10; a1++)
    {
        for (int a2 = 1; a2 <= 10; a2++)
        {
            int a3 = h[0] - a1 - a2;
            if (a3 > 0)
            {
                for (int a4 = 1; a4 <= 10; a4++)
                {
                    for (int a5 = 1; a5 <= 10; a5++)
                    {
                        int a6 = h[1] - a4 - a5;
                        if (a6 > 0)
                        {
                            int a7 = w[0] - a1 - a4;
                            int a8 = w[1] - a2 - a5;
                            int a9 = w[2] - a3 - a6;
                            if (a7 > 0 && a8 > 0 && a9 > 0 && a7 + a8 + a9 == h[2])
                                cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}