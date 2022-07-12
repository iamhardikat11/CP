#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  ll sum = 0;
  int curr = INT_MIN;
  for(int i=0;i<n;i++) {
    cin >> v[i];
    curr = max(curr, v[i]);
  }
  cout << 2*v[0]<<endl;
  v[0]=v[0]+curr;
  sum = v[0];
  curr = max(v[0], curr);
  cout << 
  for(int i=1;i<n;i++) {
    curr = max(curr,v[i]);
    v[i]+=curr;
    sum+=v[i];
    cout << sum << endl;
  }
  return 0;
}