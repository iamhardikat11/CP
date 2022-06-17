#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b;
    int cnt=0;
    for(int i=0;i<a.size();i++) {
        if(a[i]=='A') cnt++;
        else b.push_back(a[i]);
    }
    if(b!="KIHBR") cout << "NO" << endl;
    else
    {
        vector<int> x(6,0);
        for(int i=0;i<a.length();i++)
        {
            string c = "KIHBR";
            
            int r = 0;
            for(int i=0;i<a.size();i++)
            {
                if(a[i] == 'A')
                    x[r]++;
                else
                    r++;
            }
        }
        if(x[0]<=1 && x[1]==0 && x[2]==0 && x[3]<=1 && x[4]<=1 && x[5]<=1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}