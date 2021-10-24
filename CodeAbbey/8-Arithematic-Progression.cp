//Link:-https://www.codeabbey.com/index/task_view/arithmetic-progression
#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b,n;
       cin>>a>>b>>n;
       int sum=(n*(2*a+(n-1)*b))/2;
       cout<<sum<<" ";
   }
   return 0;
}
