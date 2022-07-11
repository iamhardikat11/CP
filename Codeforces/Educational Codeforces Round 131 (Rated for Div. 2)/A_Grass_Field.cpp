#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<vector<int>> v(2,vector<int> (2));
        cin >> v[0][0] >> v[0][1] >> v[1][0] >> v[1][1];
        int cnt = v[0][0] + v[0][1] +v[1][0]+v[1][1];
        vector<int> pos;
        if(v[0][0]==1) pos.push_back(1);
        if(v[0][1]==1) pos.push_back(2);
        if(v[1][0]==1) pos.push_back(3);
        if(v[1][1]==1) pos.push_back(4);
        if(cnt==0) cout << 0 << endl;
        if(cnt==1) cout << 1 << endl;
        if(cnt==2) cout << 1 << endl;
        if(cnt==3)
        {
            cout << 1 << endl;
        }
        if(cnt==4) cout << 2 << endl;
    }
    return 0;
}