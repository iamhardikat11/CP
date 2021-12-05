#include <bits/stdc++.h>
using namespace std;
void solve(int l,int c,int h,int w)
{
  for(int i=1;i<=l*(h+1)+h;i++)
  {
    for(int j=1;j<=c*(w+1)+w;j++)
    {
      if(i%(h+1)==0)
      {
        if(j%(w+1)==0)
          printf("+");
        else
          printf("-");
      }
      else
      {
        if(j%(w+1)==0)
          printf("|");
        else
          printf(".");
      }
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
    int l,c,h,w;
    scanf("%d%d%d%d",&l,&c,&h,&w);
    solve(l,c,h,w);
  }
}
