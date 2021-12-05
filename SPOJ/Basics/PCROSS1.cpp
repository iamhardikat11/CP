#include <bits/stdc++.h>
using namespace std;
int main()
{
     int tc;
     scanf("%d",&tc);
     while(tc--)
     {
          int m,n,a,b;
          scanf("%d%d%d%d",&m,&n,&a,&b);
          for(int i=1;i<=m;i++)
          {
               for(int j=1;j<=n;j++)
               {
                    if(i==a || j==b)
                     printf("*");
                    else
                     printf(".");
               }
               printf("\n");
          }
          printf("\n");
     }
}
