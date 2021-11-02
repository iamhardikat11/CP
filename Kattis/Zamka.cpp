//Link:-https://open.kattis.com/problems/zamka
#include <iostream>
using namespace std;
int sumOfDigits(int N)
{
    int sum=0;
    while(N!=0)
    {
        sum+=N%10;
        N=N/10;
    }
    return sum;
}
int main()
{
    int L,D,X;
    cin>>L>>D>>X;
    int min=0,max=0;
    if(sumOfDigits(L)==X)
     min=L;
    else if(sumOfDigits(L)>X)
    {
      int sum=sumOfDigits(L);
      int p=10;
      while(sum>=X)
      {
        while(L%p>=0)
         
      }
      min=L;
    }
    else
    {

    }
    if(sumOfDigits(D)==X)
     max=D;
    else if(sumOfDigits(D)>X)
    {

    }
    else
    {

    }
    cout<<min<<endl<<max;
    return 0;
}