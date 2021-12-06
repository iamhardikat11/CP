#include <bits/stdc++.h>
using namespace std;
void solve(int m)
{
     int N = 1;
     for(int i=1;i<=m;i++)
     {
          if(i%2==0)
          {
            N = N+i-1;
            for(int j=1;j<=i;j++)
            {
                 if(j!=i)
                  printf("%d*",N);
                 else
                  printf("%d",N);
                 N--;
            }
            printf("\n");
            N = N+i+1;
          }
          else
          {
             for(int j=1;j<=i;j++)
             {
                  if(j!=i)
                   printf("%d*",N);
                  else
                   printf("%d",N);
                  N++;
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
