//Link:-https://www.codeabbey.com/index/task_view/bicycle-race
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int S,a,b;
        cin>>S>>a>>b;
        
        if(S%(a+b)==0)
        {
             cout<<(S*a)/(a+b)<<" ";
        }
        else
        {
             double d=((float)S*(float)a)/float(a+b);
             printf("%.7lf ",d);
        }
    }
    return 0;
}
