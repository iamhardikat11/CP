#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
         int a = 1;
         int N;
         scanf("%d",&N);
         for(int i=1;i<=N;i++)
         {
              if(i%2==0)
              {
                for(int j=i;j>=1;j--)
                {
                     if(j!=1)
                      printf("%d#",(a+j-1));
                     else
                      printf("%d",(a+j-1));
                     
                }
                a = a+i;
              }
              else
              {
                for(int j=1;j<=i;j++)
                {
                     if(j!=i)
                      printf("%d#",(a+j-1));
                     else
                      printf("%d",(a+j-1));
                }
                a = a+i;
              }
              printf("\n");
         }

    }
}