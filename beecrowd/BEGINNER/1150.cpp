#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int X;
    cin >> X;
    int Z;
    cin >> Z;
    while(1)
     {
         cin >> Z;
         if(Z>X)
          break;
     }
     int n = 1;
     for(int i=X+1;;i++)
     {
        X+=i;
        n++;
        if(X>Z) 
         break; 
     }
     printf("%d\n",n);
     return 0;
}
