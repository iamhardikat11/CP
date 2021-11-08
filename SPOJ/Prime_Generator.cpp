#include <bits/stdc++.h>
using namespace std;
int isPrime(int a)
{
   for(int i=3;i<=sqrt(a)+1;i+=2)
   {
      if(a%i==0)
       return 0;
   }
   return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int lo,hi;
        cin>>lo>>hi;
        if(lo==1)
        {
           cout<<2<<endl;
           for(int i=3;i<=hi;i+=2)
           {
               if(isPrime(i))
                cout<<i<<endl;
           }
        }
        else
        {
          if(lo%2==0)
          {
            for(int i=lo+1;i<=hi;i+=2)
              {
               if(isPrime(i))
                cout<<i<<endl;
              }  
          }
          else
          {
              for(int i=lo;i<=hi;i+=2)
              {
               if(isPrime(i))
                cout<<i<<endl;
              }
          }
          
        }
        cout<<endl;
        
    }
    return 0;
}
