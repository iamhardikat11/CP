#include <bits/stdc++.h>
using namespace std;
void solve(int N)
{
     for(int i=1;i<=N;i++)
     {
          if(i<=N/2+1)
          {
           for(int j=1;j<=N;j++)
           {
               if(j<=N/2-i+1)
                printf("#");
               else if(j<=N/2+i)
                printf(".");
               else
                printf("#");
           }
           printf("\n");
          }
          else
          {
           for(int j=1;j<=N;j++)
           {
               if(j<=i-N/2-1)
                printf("#");
               else if(j<=N+N/2-i+1)
                printf(".");
               else
                printf("#");
           }
           printf("\n");
          }
        }
}
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
          int N;
          scanf("%d",&N);
          solve(N);
     }
}
