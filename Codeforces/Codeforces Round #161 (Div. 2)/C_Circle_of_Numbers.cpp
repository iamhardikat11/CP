#include <bits/stdc++.h>
using namespace std;
void dfs(int source,map<int,vector<int> > &a, vector<bool> &visited)
{
    visited[source-1] = true;
    cout << source << " ";
    for(auto it: a[source])
    {
        if(!visited[it-1])
        {
            dfs(it,a,visited);
        }
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    map<int,vector<int>> a;
    for(int i=1;i<=2*n;i++)
    {
        int x,y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    vector<bool> visited(n,false);
    for(auto it: a)
    {
        cout << it.first << ": ";
        cout <<
    }
    cout << endl;
    return 0;
}