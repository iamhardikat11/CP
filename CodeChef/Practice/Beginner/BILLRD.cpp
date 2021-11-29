#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
        ll N,K,x,y;
        scanf("%lld%lld%lld%lld",&N,&K,&x,&y);
        if(x==y)
         printf("%lld %lld\n",N,N);
        else if(x>y)
        {
             switch(K%4)
             {
                  case 0: printf("%lld %lld\n",x-y,0);
                          break;
                  case 1: printf("%lld %lld\n",N,N+y-x);
                          break;
                  case 2: printf("%lld %lld\n",N-x+y,N);
                          break;
                  case 3: printf("%lld %lld\n",0,x-y);
             }
        }
        else
        {
             switch(K%4)
             {
                  case 0: printf("%lld %lld\n",0,y-x);
                          break;
                  case 1: printf("%lld %lld\n",N+x-y,N);
                          break;
                  case 2: printf("%lld %lld\n",N,N+x-y);
                          break;
                  case 3: printf("%lld %lld\n",y-x,0);
                          break;
             }
        }
        
    }
}
