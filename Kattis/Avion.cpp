//Link:-https://open.kattis.com/problems/avion
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int flag=1;
    for(int i=1;i<=5;i++)
    {
        string s;
        getline(cin,s);
        for(int i=0;i<=s.length()-2;i++)
        {
            if(s.substr(i,i+3)=="FBI")
            {
              flag=0;
              cout<<i<<" ";
            }
        }
    }
    if(flag==1)
     cout<<"HE GOT AWAY!"<<endl;
    return 0;
}