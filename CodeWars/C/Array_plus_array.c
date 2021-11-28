#include <stddef.h>

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
   long int sum=0;
  for(int i=0;i<na;i++)
    sum+=a[i];
  for(int i=0;i<nb;i++)
    sum+=b[i];
    return sum;
}
