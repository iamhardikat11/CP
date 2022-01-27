#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    int a_=0,b_=0;
    int point = 1;
    int winner = -1;
    for(int i=0;i<a.length();i+=2)
    {
        if(a.at(i)=='A')
        {
            a_+=(a.at(i+1)-48);
        }
        else
        {
            b_+=(a.at(i+1)-48);
        }
        if(a_==b_)
            point = 2;
        if(a_>=11 && a_>b_ && point==1)
        {
            winner = 1;
            break;
        }
        else if(b_>=11 && b_>a_ && point==1)
        {
            winner = 0;
            break;
        }
        else if(a_>=11 && point==2 && a_-b_>=2)
        {
            winner = 1;
            break;
        }
        else if(b_>=11 && point==2 && b_-a_>=2)
        {
            winner =0;
            break;     
        }
    }
    if(winner)
        cout << "A" << endl;
    else
        cout << "B" << endl;
    return 0;
}
