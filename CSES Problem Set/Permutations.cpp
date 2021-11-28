#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int N;
    scanf("%d", &N);
    if(N%2==0)
    {
        if(N==2)
         printf("NO SOLUTION");
        else 
        {
            for(int i=2;i<=N;i+=2)
             printf("%d ",i);
            for(int i=1;i<N;i+=2)
             printf("%d ",i);
        }
    }
    else
    {
        if(N==3)
         printf("NO SOLUTION");
        else
        {
         for(int i=N-1;i>=2;i=i-2)
          printf("%d ",i);
         for(int i =N;i>=1;i=i-2 )
          printf("%d ",i);
        }

    }
} 