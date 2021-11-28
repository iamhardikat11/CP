#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a,b;
    ll count = 0;
    if(n%2==0)
    {
       scanf("%lld",&a);
       for(ll i=1;i<n;i++)
       {
         scanf("%lld",&b);
         if(a>b)
         {
              count+=(a-b);
              b = a;
         }
       }
    }
    printf("%lld\n",count);
    return 0;
}