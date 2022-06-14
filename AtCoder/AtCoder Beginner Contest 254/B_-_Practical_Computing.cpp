#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<vector<int> > v(n);
  for(int i=0;i<n;i++)
    v[i] = vector<int> (i+1,0);
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++){
        if(j==0 || j==i) v[i][j] = 1;
        else v[i][j] = v[i-1][j]+v[i-1][j-1];
    }
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
      cout << v[i][j] << " ";
    cout << endl;
  }
  return 0;
}