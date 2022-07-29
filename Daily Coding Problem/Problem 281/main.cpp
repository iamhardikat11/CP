#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  map<int,int> m;
  for(int i=0;i<n;i++)
  {
    cin >> v[i];
    m[v[i]]++;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      double x = sqrt(pow(nums[i],2)+pow(nums[j],2));
      if(floor(x)==ceil(x))
      {
        if(m.find(x)!=m.end())
        {
          cout << "YES" << endl;
          return 0;
        }
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
