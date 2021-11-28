#include <math.h>
long long findNb(long long m)
{
  // your code
  
  for(long long int i=1;;i++)
  {
    long long sum=pow((i*(i+1)/2),2);
    if(sum==m)
      return i;
    else if(sum>m)
      return -1;
    else
      continue;
  }
}
