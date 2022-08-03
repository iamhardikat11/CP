#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    string ans = "";
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == '1')
        {
            ans += "1";
        }
        else if(a[i] == '0')
        {
            ans += "0";
        }
        else if(a[i]=='B')
        {
            if(ans.size()==0) continue;
            else ans = ans.substr(0, ans.size()-1);
        }
    }
    cout << ans << endl;
    return 0;
}