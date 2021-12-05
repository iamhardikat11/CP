#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--){
  ll a,b;
  scanf("%lld%lld",&a,&b);
  if(a==b)
    printf("n is equal m: %lld\n",a);
  else if(a>b)
    printf("%lld is greater than %lld\n",a,b);
  else
    printf("%lld is smaller than %lld\n",a,b);
  }
  return 0;
}
