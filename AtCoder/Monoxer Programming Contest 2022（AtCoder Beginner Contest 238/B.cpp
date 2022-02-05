#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++) cin >> A[i];
  vector<int> angles;
  angles.push_back(0);
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<angles.size();j++)
    {
      angles[j]=(A[i]+angles[j])%360;
    }
    angles.push_back(0);
  }
  sort(angles.begin(),angles.end());
  int max_= INT_MIN;
  for(int i=0;i<angles.size();i++)
  {
    if(i==angles.size()-1)
    {
      if(360-angles[i]>max_)
        max_ = 360-angles[i];
    }
    else
    {
      if((angles[i+1]-angles[i])>max_)
        max_ = angles[i+1]-angles[i];
    }
  }
  cout << max_ << endl;
  return 0;
}
