#include <bits/stdc++.h>

using namespace std;

void solve(int K) {
     for(int i=1;i<=K;i++)
     {
          char ch = 'A';
          for(int j=1;j<=K;j++)
          {
           if(j<=(i-1))
            printf("_");
           else
            {
                 printf("%c",ch);
                 ch++;
            }
          }
          printf("\n");
     }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) {
     //    printf("Case #",t,": "); 
     int K;
     scanf("%d",&K);
     solve(K);
    }
}
