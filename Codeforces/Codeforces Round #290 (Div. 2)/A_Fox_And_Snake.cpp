#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<string> v(n, string(m,'.'));
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++) v[i][j] = '#';
        }
        else
        {
            if(i%4==1) v[i][m-1] = '#';
            else v[i][0] = '#';
        }
    }
    for(int i=0;i<n;i++) cout << v[i] << endl;
    return 0;
}