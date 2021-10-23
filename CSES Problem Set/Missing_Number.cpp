//Link:-https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
  ll n;
  cin>>n;
  ll arr[n-1];
  for(ll i=0;i<n-1;i++) cin>>arr[i];
  sort(arr,arr+n-1);
  for(ll i=0;i<n-1;i++){
    if(arr[i]!=(i+1)) {cout<<(i+1)<<endl; break;}
    if(i==n-2)
    cout<<n<<endl;
  }

  return 0;
}
