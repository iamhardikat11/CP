#include <bits/stdc++.h>
using namespace std;
void solve()
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