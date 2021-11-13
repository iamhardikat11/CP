//Link:-https://www.codeabbey.com/index/task_view/triangles
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c;
        if(s-2*a>0 && s-2*b>0 && s-2*c>0)
         cout<<"1"<<" ";
        else
         cout<<"0"<<" ";
    }
    return 0;
}
