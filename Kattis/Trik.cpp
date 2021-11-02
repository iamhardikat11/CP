//Link:-https://open.kattis.com/problems/trik
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
        {
            if(p==1) p=2;
            else if(p==2) p=1;
        }
        if(s[i]=='B')
        {
            if(p==2) p=3;
            else if(p==3) p=2;
            
        }
        if(s[i]=='C')
        {
            if(p==1) p=3;
            else if(p==3) p=1;
            
        }
    }
    cout<<p<<endl;
}

