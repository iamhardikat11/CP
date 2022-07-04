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
    int N;
    cin >> N;
    vector<string> v(N);
    vector<pair<int,int>> coord_;
    vector<pair<int,int>> coord;
    int mx = 0;
    for(int i=0;i<N;i++) {
        cin >> v[i];
        for(int j=0;j<N;j++)
            if(v[i][j]-48 > mx)
            {
                mx = (v[i][j]-48);
                coord_.push_back(make_pair(i,j));
            }
    }
    string m = "";
    for(auto it = coord_.begin(); it != coord_.end(); ++it)
    {
        if(v[(*it).first][(*it).second]-48==mx)
        {
            coord.push_back(make_pair((*it).first,(*it).second));
        }
    }
    for(int i=0;i<coord.size();i++)
    {
           
    }
    return 0;
}