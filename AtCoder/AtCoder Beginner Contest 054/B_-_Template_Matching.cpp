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
    int M,N;
    cin >> M >> N;
    vector<string> image(M);
    vector<string> temp(N);
    for(int i=0;i<M;i++) {
        cin >> image[i];
    }
    for(int i=0;i<N;i++) {
        cin >> temp[i];
    }
    bool found =  false;
    for(int i=0;i<M-N+1;i++)
    {
        for(int j=0;j<M-N+1;j++)
        {
            bool flag = true;
            for(int x = i; x < N+i; x++)
            {
                for(int y=j; y< N+j; y++)
                {
                    if(image[x][y]!=temp[x-i][y-j])
                    {
                        flag = false;
                        break;
                    }
                }
                if(!flag)
                {
                    break;
                }
            }
            if(flag)
            {
                found = true;
                break;
            }
        }
    }
    if(found) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}