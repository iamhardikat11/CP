#include <stddef.h>

size_t positive_sum(const int *values, size_t count)
{
  size_t c=0;
  for(size_t i=0;i<count;i++)
  {
    if(values[i]>=0)
      c+=values[i];
  }
  return c;
}
