#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        int N;
        scanf("%d",&N);
        for(int i=N;i>=1;i--)
        {
             for(int j=1;j<=(N-i)+1;j++)
              printf("%d",i);
             for(int j=1;j<=(i-1);j++)
              printf("%c",(char)(65+(N-i)));
             printf("\n");
        }
    }
}