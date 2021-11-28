#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        int H,P;
        scanf("%d %d",&H,&P);
        int flag = 0;
        while(P>0 && H>0)
        {
             if(P>=H)
             {
                  flag =1;
                  break;
             }
             H = H-P;
             P = (int)floor(P/2.0);
        }
        printf("%d\n",flag);
    }
}
