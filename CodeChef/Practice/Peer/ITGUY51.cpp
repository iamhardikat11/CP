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
     //    printf("Case #",t,": "); 
     int N;
     scanf("%d",&N);
     for(int i=1;i<=(2*N*N-2*N+1);i+=(2*N))
     {
          int k = i;
          for(int j=1;j<=N;j++)
          {
            printf("%d",k);
            k+=2;
          }
          printf("\n");
     }
   }
}