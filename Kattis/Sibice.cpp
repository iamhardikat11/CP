//Link:-https://open.kattis.com/problems/sibice
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,W,H;
    cin>>N>>W>>H;
    while(N--)
    {
        int s;
        cin>>s;
        if(s*s<=W*W+H*H)
         cout<<"DA"<<"\n";
        else
         cout<<"NE"<<"\n";
    }
    return 0;
}
