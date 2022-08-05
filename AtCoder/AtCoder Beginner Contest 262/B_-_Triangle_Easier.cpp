#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    map<int,set<int>> adj;
    while(M--)
    {
        int x,y;
        cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    int cnt =0;
    for(int i=1;i<=N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            for(int k=j+1;k<=N;k++)
            {
                if(i!=j && i!=k && j!=k)
                {
                    if(adj[i].find(j)!=adj[i].end() && adj[k].find(i)!=adj[k].end() && adj[j].find(k)!=adj[j].end())
                     cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}