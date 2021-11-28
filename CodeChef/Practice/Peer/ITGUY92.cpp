#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) {
        int N;
        scanf("%d",&N);
        for(int i=1;i<=N;i++)
        {
             for(int j=1;j<=(i-1);j++)
              printf("_");
             for(int j=i;j<=N;j++)
              printf("%c",(char)(64+j));
             printf("\n");
        }
    }
}