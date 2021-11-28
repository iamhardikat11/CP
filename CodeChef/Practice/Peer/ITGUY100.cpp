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
        int num = 1;
        for(int i=1;i<=N;i++)
        {
             for(int j=1;j<=(N-i);j++)
              printf(" ");
             for(int j=1;j<=i;j++)
                  printf("%c",(char)(63+j+i));
             for(int j=1;j<=i;j++)
                  printf("%d",i+j-1);
             printf("\n");
        }
    }
}