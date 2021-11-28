#include <stdbool.h>
#include <math.h>

bool is_prime(int n)
{
    if(n<=0 )
       return false;
    else if(n==1)
      return false;
    else if(n==2)
      return true;
    else
    {
      for(int i=2;i<=sqrt(n);i++)
      {
        if(n%i==0)
          return false;
      }
      return true;
    }
}
