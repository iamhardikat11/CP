#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  cout << ceil((double)(n-1)/(k-1)) << endl;
  return 0;
}
