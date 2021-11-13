#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int p)
{
    if(p==1 || p==0) return 0;
    else if(p==2) return 1;
    else
    {
      for(int i=3;i<=sqrt(p);i+=2)
      { 
          if(p%i==0)
            return 0;
      }
    return 1;
    }
    
}
int nextDivisiblePrime(int a)
{
    for(int i=3;i<=a;i++)
    {
        if(a%i==0 && isPrime(i))
         return i;
    }
    
}
void solve(int a)
{
    if(isPrime(a))
    {
        cout<<a<<" ";
        return;
    }
    if(a%2==0){
     while(a%2==0)
     {
        cout<<"2";
        cout<<"*";
        a=a/2;
     }
    }
    while(1)
    {
        int p=nextDivisiblePrime(a);
        cout<<p;
        a=a/p;
        if(a==1)
         break;
        else 
         cout<<"*";
    }
    cout<<" ";
    return;
}
int main(void)
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        solve(a);
    }
    return 0;
}
