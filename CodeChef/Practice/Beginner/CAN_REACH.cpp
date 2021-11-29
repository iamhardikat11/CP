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
        int x,y,k;
        scanf("%d%d%d",&x,&y,&k);
        if(x%k==0 && y%k==0)
         printf("YES\n");
        else
         printf("NO\n");
    }
}
