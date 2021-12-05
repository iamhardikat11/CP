#include <bits/stdc++.h>
using namespace std;
void solve(int l,int c,int s)
{
     for(int i=1;i<=(s+1)*l+1;i++)
     {
          for(int j=1;j<=(s+1)*w+1;j++)
          {
               if(i%(s+1)==1)
                printf("*");
               if(j%(s+1)==1)
                printf
          
          }
          printf("\n");
     }
     printf("\n");
}
int main()
{
     int tc;
     scanf("%d",&tc);
     while(tc--)
     {
          int l,c,s;
          scanf("%d%d%d",&l,&c,&s);
          solve(l,c,s);
     }
     return 0;
}
