//Link:-https://open.kattis.com/problems/stopwatch
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t%2!=0)
     cout<<"still running"<<endl;
    else
    {
       int time=0;
       int i=2;
       while(i<=t)
       {
           int a,b;
           cin>>a>>b;
           time+=(b-a);
           i+=2;
       }
       cout<<time<<endl;
    }
    
    return 0;
}