//Link:-https://open.kattis.com/problems/pet
#include <iostream>
using namespace std;
int main()
{
    int sum,max_idx=1,max_sum=0;
    for(int i=1;i<=5;i++)
    {
       sum=0;
       int a;
       for(int j=0;j<4;j++)
       {
           cin>>a;
           sum+=a;
       }
       if(sum>max_sum)
       {
           max_idx=i;
           max_sum=sum;
       }
    }
    cout<<max_idx<<" "<<max_sum<<endl;
}