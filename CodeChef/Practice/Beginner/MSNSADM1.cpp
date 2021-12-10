#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        int N;
        cin >> N;
        int a[N],b[N];
        for(int i=0;i<N;i++)
         scanf("%d",&a[i]);
        for(int j=0;j<N;j++)
         scanf("%d",&b[j]);
        int m = 0;
        for(int k=0;k<N;k++)
        {
            int quan = (20*a[k]-10*b[k]);
            if(quan>m)
              m = quan;
        }
        printf("%d\n",m);
    }
    return 0;
}
