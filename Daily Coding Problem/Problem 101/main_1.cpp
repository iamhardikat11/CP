#include <bits/stdc++.h>
using namespace std;
vector<int> seive;
void primes(int n)
{
  vector<int> p(n+1,true);
  v[0] = false;
  v[1] = true;
  for(int i=2;i<n+1;i++)
  {
    if(p[i])
      seive.push_back(i);
    for(int j=i;j<=n;j+=i)
      p[j] = false;
  }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  primes(n);
  vector<pair<int,int> > solution; 
  for(int i=0;i<seive.size();i++)
  {
    int it = find(seive.begin(),seive.end(),n-seive[i])
    if(it!=seive.size())
    {
      solution.push_back(make_pair(i,n-i));
      v.erase(i);
      v.erase(it);
    }
  }
  for(int i=0;i<solution.size();i++)
  {
    cout << "Case #" << (i+1) << " " << solution[i][0] << " " << solution[i][1] << endl;
  }
  return 0;
}
