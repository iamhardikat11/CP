#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    int b = 0;
    int a_ = 0;
    int pt = 1;
    for(int i=0;i<a.length();i++)
    {
        if(a.at(i)=='(' || a.at(i)==')')
        {
                pt = 0;
                continue;
        }
        if(a.at(i)=='|')
        {
            if(pt) b++;
            else a_++;
        } 
    }
    if(a_==b) cout << "correct" << endl;
    else cout << "fix" << endl;
    return 0;
}
