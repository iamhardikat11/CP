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
        int M = N;
        int count = 0;
        while(M!=0)
        {
             if(M%10!=0)
             {
                  if(N%(M%10)==0)
                   count++;
             }
             M = M/10;
        }
        printf("%d\n",count);
    }
}
