//Link:-https://www.codeabbey.com/index/task_view/collatz-sequence
#include <iostream>
using namespace std;
int calculate(int N)
{
    if(N==1)
     return 0;
    else if(N%2==0)
     return 1+calculate(N/2);
    else
     return 1+calculate(3*N+1);
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int N;
       cin>>N;
       cout<<calculate(N)<<" ";
   }
   return 0;
}
