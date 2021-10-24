//Link:-https://www.codeabbey.com/index/task_view/sum-of-digits
#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<sumOfDigits(a*b+c)<<" ";
    }
}
