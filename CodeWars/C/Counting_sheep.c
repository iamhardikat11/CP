#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count);

  
size_t count_sheep(const bool *sheep, size_t count)
{
  size_t coun=0;
  for(int i=0;i<count;i++)
  {
    if(sheep[i]==true)
      {
      coun++;
    }
  }
  return coun;
}
