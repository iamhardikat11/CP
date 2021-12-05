#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll tc;
  scanf("%lld",&tc);
  while(tc--)
  {
   double a,b;
   scanf("%lf %lf",&a,&b);
   double c = a+b;
   if(c-(int)c == 0.0)
     printf("%d\n",(int)c);
   else 
     printf("%lf\n",c);
  }
  return 0;
}
