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
vector<bool> visited(n,false);
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}
int circle(int x1, int y1, int x2,
           int y2, int r1, int r2)
{
    int distSq = (x1 - x2) * (x1 - x2) +
                 (y1 - y2) * (y1 - y2);
    int radSumSq = (r1 + r2) * (r1 + r2);
    if (distSq == radSumSq)
        return 1;
    else if (distSq > radSumSq)
        return -1;
    else
        return 0;
}
bool computePaths(int n, int s, int d, vector<vector<int>> adj)
{
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                adj[i][j] = adj[i][j] | (adj[i][k] && adj[k][j]);
    }
    return adj[s][d]==1;
}
bool dfs(int start, int end, vector<vector<int>> adj,int n)
{
    
    if (start == end)
        return true;
    visited[start] = true;
    for (auto x : adj[start]) {
        if (!visited[x])
            if (dfs(x, end, adj, n))
                return true;
    }
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;
    cin >> N;
    pair<int,int> s,t;
    int S = -1;
    int D = -1;
    cin >> s.first >> s.second >> t.first >> t.second;
    vector<pair<pair<int,int>, int> > v(N);
    for(int i=0;i<N;i++)
    {
            cin >> v[i].first.first >> v[i].first.second >> v[i].second;
            if(distance(v[i].first.first, v[i].first.second,s.first,s.second)==v[i].second) S = i;
            if(distance(v[i].first.first, v[i].first.second,t.first,t.second)==v[i].second) D = i;
    }
    vector<vector<int>> adj(N);
    int u = N;
    int e = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j)
            {
                adj[i].push_back(i);
                continue;
            }
            int k = circle(v[i].first.first, v[i].first.second,v[j].first.first,v[j].first.second, v[i].second, v[j].second);
            if(k==1 || k==-1)
            {
                adj[i].push_back(j);
                e++;
            }    
        }
    } 
    // for(int i=0;i<N;i++)
    // {
    //     cout << i << ": "; 
    //     for(int j=0;j<adj[i].size();j++)
    //      cout << adj[i][j] << " ";
        
    //     cout << endl;
    // }
    if(dfs(S, D, adj, N)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}