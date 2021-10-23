//Link:-https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
  ll n;
  cin>>n;
  cout<<n<<" ";
  while(n!=1)
  {
    if(n%2==0)
    {
      n=n/2;
    }
    else
    {
      n=3*n+1;
    }
    cout<<n<<" ";
  }
  return 0;
}
