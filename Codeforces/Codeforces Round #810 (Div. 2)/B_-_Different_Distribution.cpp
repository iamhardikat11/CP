#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
  return a.first>b.first;
}
int main()
{
  int n;
  cin >> n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(),v.end(),cmp);
  cout << v[0].first+v[0].second << endl;
  return 0;
}