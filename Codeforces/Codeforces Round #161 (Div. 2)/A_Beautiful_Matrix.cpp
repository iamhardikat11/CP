#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    pair<int,int> m;
    vector<vector<int>> v(n,vector<int> (n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> v[i][j];
            if(v[i][j])
            {
                m.first = i;
                m.second = j;
            }
        }
    }
    cout << abs(m.first-2) + abs(m.second-2) << endl;
}