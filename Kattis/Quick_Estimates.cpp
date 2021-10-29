//Link:-https://open.kattis.com/problems/quickestimate
#include <bits/stdc++.h>
using namespace std;
void solve(int N)
{
  int digits=0;
  while(N!=0)
  {
    digits++;
    N=N/10;
  }
  cout<<digits<<"\n";
  return;
}
int main()
{
  int t,N;
  cin>>t;
  while(t--)
  {
    cin>>N;
    solve(N);
  }
  return 0;
}
