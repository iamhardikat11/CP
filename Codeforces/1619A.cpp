#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    getline(cin,s);
    while (n--)
    {
        getline(cin,s);
        int flag = 1;
        if(s.length()%2==0)
        {
            int n = s.length()/2;
            for(int i=0;i<n;i++)
            {
                if(s.at(i)!=s.at(i+n))
                {
                     flag = 0;
                     break;
                }
            }
        }
        else
         flag = 0;
        if(flag)
         cout << "YES" << endl;
        else
         cout << "NO" << endl;
    }
}
