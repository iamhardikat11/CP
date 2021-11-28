#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        int n,c;
        scanf("%d %d",&n,&c);
        int a;
        int total = 0;
        for(int i=1;i<=n;i++)
        {
           scanf("%d",&a);
           total+=a;
        }
        if(total<=c)
         printf("Yes\n");
        else
         printf("No\n");
    }
}
