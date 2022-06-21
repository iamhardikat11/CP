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
    int n,m;
    cin >> n >> m;
    vector<string> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    vector<pair<int,int>> A;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            {
                A.push_back(make_pair(i,j));
            }
        }
    }
    int x = -1,y=-1;

    if(A[0].first==A[1].first || A[0].second==A[1].second)
    {
        if(A[0].first==A[1].first)
        {
            x = A[2].first;
            if(A[1].second==A[2].second) y = A[0].second;
            else y = A[1].second;
        }
        else
        {
            y = A[2].second;
            if(A[1].first==A[2].first) x = A[0].first;
            else x = A[1].first;
        }
    }
    else if(A[1].first==A[2].first || A[1].second==A[2].second)
    {
        if(A[1].first==A[2].first)
        {
            x = A[0].first;
            if(A[0].second==A[2].second) y = A[1].second;
            else y = A[2].first;
        }
        else
        {
            y = A[0].second;
            if(A[0].first==A[2].first) x = A[1].first;
            else x = A[2].first;
        }
    }
    else
    {
        if(A[0].first==A[2].first)
        {
            x = A[1].first;
            if(A[1].first==A[2].first) x = A[0].first;
            else x = A[2].first;
        }
        else
        {
            y = A[1].second;
            if(A[1].second==A[2].second) y = A[0].second;
            else y = A[2].second;
        }
    }
    cout << x+1 << " " << y+1 << endl;
    return 0;
}