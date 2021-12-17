#include <iostream>
#include <cmath>
using namespace std;
bool solve(int N)
{
  if(N==0 || N==1)
   return false;
  for(int i = 2;i<=sqrt(N);i++)
  {
      if(N%i==0)
       return false;
  }
  return true;
}
int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if(solve(N))
           printf("%d eh primo\n",N);
        else 
           printf("%d nao eh primo\n",N);
           
    }
 
    
}
