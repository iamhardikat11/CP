Link:-https://www.codeabbey.com/index/task_view/min-of-three
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        if(a>b && a>c)
        cout<<a<<" ";
        else if(b>a && b>c)
        cout<<b<<" ";
        else
        cout<<c<<" ";
    }
    return 0;
}
