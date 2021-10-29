//Link:-https://open.kattis.com/problems/ratingproblems
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,i=0;
  cin>>n>>k;
  double r,min,max,sum;
  while(i<k)
  {
    cin>>r;
    sum+=r;
    i++;
  }
  max=(sum+3.0*(n-k))/(double)n;
  min=(sum-3.0*(n-k))/(double)n;
  cout<<min<<" "<<max;
  return 0;
}
