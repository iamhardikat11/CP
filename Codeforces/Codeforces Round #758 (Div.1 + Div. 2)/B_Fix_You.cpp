#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<char>> v(n,vector<char> (m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin >> v[i][j];
        }
        int cnt = 0;
        for(int i=0;i<n-1;i++)
        {
            cnt+=v[i][m-1]=='R';
        }
        for(int i=0;i<m-1;i++)
        {
            cnt+=v[n-1][i]=='D';
        }
        cout << cnt << endl;
    }
    return 0;
}