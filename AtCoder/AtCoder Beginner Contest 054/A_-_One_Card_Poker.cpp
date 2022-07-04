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
    vector<int> v = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 1};
    int A,B;
    cin >> A >> B;
    if(A==B) cout << "Draw" << endl;
    else
    {
        if(A==1) cout << "Alice" << endl;
        else if(B==1) cout << "Bob" << endl;
        else
        {
            A > B ? cout << "Alice" : cout << "Bob" << endl;
        }
    }
    return 0;
}