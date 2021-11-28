#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    scanf("%d",&tc);
    for (int t = 1; t <= tc; t++) 
    {
         int N;
         scanf("%d",&N);
         int arr[N];
         ll count = 0;
         for(int i=0;i<N;i++)
              scanf("%d",&arr[i]);
         for(int i=0;i<N-1;i++)
          count += (ll)abs(arr[i+1]-arr[i])-1;
         printf("%lld\n",count);
    }
}
