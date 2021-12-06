#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
          int N;
          scanf("%d",&N);
          for(int i=1;i<=N;i++)
          {
               for(int j=1;j<=N-i;j++)
                printf(" ");
               for(int j=1;j<=2*i-1;j++)
               {
                    if(N%2==0)
                    {
                      if(i%2==0)
                       printf("%c",j%2==0?'A':'*');
                      else
                       printf("%c",j%2==0?'*':'A');
                    }
                    else
                    {
                      if(i%2==0)
                       printf("%c",j%2==0?'*':'A');
                      else
                       printf("%c",j%2==0?'A':'*');   
                    }
               }
               printf("\n");
          }
     }
}
