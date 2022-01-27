#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  int K;
  vector<int> v(n);
  vector<vector<int> > position;
  for(int i=0;i<n;i++) cin >> v[i];
  vector<int> suffix_sum(n);
  int sum = v[0];
  suffix_sum.push_back(sum);
  for(int i=1;i<n;i++)
  {
    sum+=v[i];
    suffix_sum.push_back(sum);
  }
  for(int i=0;i<n;i++)
  {
    vector<int> solution;
    for(int j=0;j<n;j++)
    {
      if(suffix_sum[j]==K)
      {
        for(int p = i;p<=j;p++)
          solution.push_back(v[p]);
      }
    }
    position.push_back(solution);
    for(int k=0;k<n;k++)
    {
      suffix_sum[k]-=v[i];
    }
    solution.clear();
  }
  for(int i=0;i<position.size();i++)
  {
    cout << "Case #" << (i+1) << " : ";
    for(int j=0;j<position[i].size();j++)
      cout << position[i][j] << " ";
    cout << endl;
  }
}
