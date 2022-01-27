// The Ridiculous Method
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
  if(i==0 || i==1) return false;
  if(i==2) return true;
  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int i = -1;
  for(int i=3;i<n;i++)
  {
    if(isPrime(i))
    {
      if(isPrime(n-i))
      {
        break;
      }
    }
  }
  cout << (i) << (n-i) << endl;
  return 0;
}
