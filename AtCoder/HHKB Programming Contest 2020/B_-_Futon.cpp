#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            if(v[i][j]=='.' && v[i][j+1]=='.') cnt++;
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(v[i][j]=='.' && v[i+1][j]=='.') cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}