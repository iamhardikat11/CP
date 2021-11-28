#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
         int N;
         scanf("%d",&N);
         int K = N/2;
         for(int i=1;i<=N;i++)
         {
           if(i<=K)
           {
                for(int j=1;j<=i;j++)
                 printf("*");
           }
           else if(i==K+1)
           {
                for(int j=1;j<=i;j++)
                 printf("%c",(64+j));
           }
           else
           {
                for(int j=i;j<=N;j++)
                 printf("*");
           }
           printf("\n");
     
         }
     }

}
