#include <bits/stdc++.h>

using namespace std;

void solve(int N) {
     for(int i=1;i<=N;i++)
     {
          for(int j=1;j<=i;j++)
          {
               if(i%2!=0)
                printf("*");
               else
                printf("?");
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
     int N;
     scanf("%d",&N);
     solve(N);
    }
}
