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
               int k = N-1;
               printf("%d",i);
               int a = i;
               for(int j=2;j<=i;j++)
               {
                  a = a+k;
                  printf("%d",(a));
                  k--;
               }
               printf("*\n");
          }
     }
}