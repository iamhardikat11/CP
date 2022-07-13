#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N,K;
  cin >> N >> K;
  int sum = 0;
  for(int i=1;i<=N;i++)
  {
    for(int j=1;j<=K;j++)
    {
      sum+=100*i+j;
    }
  }
  cout << sum << endl;
  return 0;
}