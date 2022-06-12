#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int tot=0;
        for(int i=0;i<6;i++)
        {
            if(i<3) tot+=(s[i]-48);
            else tot-=(s[i]-48);
        }
        if(tot==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}