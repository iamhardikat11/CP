#include <iostream>
using namespace std;
#define ll long long
ll gcd(long long a, long long b)
{
    if(a==0)
     return b;
    else if(a>b)
     return gcd(b,a%b);
    return gcd(b%a,a);
}
int main()
{
  ll a,b;
  scanf("%lld%lld", &a, &b);
  ll num,den;
  while(a!=-1 && b!=-1)
  {
     num = (b*(b-1))/2;
     den = (a*(a-1));
     printf("%lld/%lld\n", num/gcd(num,den), den/gcd(num,den)); 
     scanf("%lld%lld",&a,&b);
  }
}