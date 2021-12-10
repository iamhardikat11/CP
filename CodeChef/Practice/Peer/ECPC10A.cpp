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
        int arr[N];
        int count = 0;
        for(int i=0;i<N;i++)
         scanf("%d",&arr[i]);
        for(int i=0;i<N;i++)
        {
             for(int j=i+1;j<N;j++)
             {
                  if((arr[i]^arr[j])>max(arr[i],arr[j]))
                   count++;
             }
        }
        printf("%d\n",count);
    }
    return 0;
}
