#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
         int N;
         scanf("%d",&N);
         for(int i=1;i<=N;i++)
         {
              if(i<=(N/2+1))
              {
                   for(int j=1;j<=i;j++)
                   {
                        if(j!=i)
                         printf("%d*",i);
                        else
                         printf("%d",i);
                   }
              }
              else
              {
                   for(int j=1;j<=N-i+1;j++)
                   {
                        if(j!=N-i+1)
                         printf("%d*",N-i+1);
                        else
                         printf("%d",N-i+1);
                   }
              }
              printf("\n");
              
         }
    }
}