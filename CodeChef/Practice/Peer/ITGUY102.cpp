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
       char ch = 'A';
       for(int i=1;i<=N;i++)
       {
            for(int j=1;j<=N;j++)
            {
                 if(i%2==0)
                 {
                   if(j%2==0)
                    printf("*");
                   else
                   {
                    printf("%c",ch);
                    ch++;
                   }
                 }
                 else
                 {
                   if(j%2!=0)
                    printf("*");
                   else
                   {
                    printf("%c",ch);
                    ch++;  
                   }
                 }
            }
            printf("\n");
       }
       
    }
}