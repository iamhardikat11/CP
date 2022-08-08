#include <bits/stdc++.h>
using namespace std;
void solve(int N, map<int,set<int>> r)
{
    for(int i=2;i<=N;i++)
    {
        
    }
}
int main()
{
    int N,M;
    cin >> N >> M;
    map<int,set<int>> m;
    while(M--)
    {
        int a,b;
        cin >> a >> b;
        m[a].insert(b);
        m[b].insert(a);
    }
    solve(N, m);
}