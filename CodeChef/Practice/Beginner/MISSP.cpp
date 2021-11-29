#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(int N,ll arr[])
{
     for(int i=0;i<N;i++)
     {
          bool flag = true;
          for(int j=0;j<N;j++)
          {
               if(j!=i && arr[i]==arr[j])
               {
                    flag = false;
                    break;
               }
          }
          if(flag)
          {
               printf("%lld\n",arr[i]);
               break;
          }
     }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        ll N;
        scanf("%lld",&N);
        ll arr[N];
        for(int i=0;i<N;i++)
         scanf("%lld",&arr[i]);
        solve(N,arr);
    }
}
