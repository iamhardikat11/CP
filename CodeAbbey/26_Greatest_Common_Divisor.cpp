//Link:-https://www.codeabbey.com/index/task_view/greatest-common-divisor
#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
     return b;
    else if(b==0)
     return a;
    else if(a>b)
     return gcd(b,a%b);
    else
     return gcd(b%a,a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<"("<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<")"<<" ";
    }
    return 0;
}
