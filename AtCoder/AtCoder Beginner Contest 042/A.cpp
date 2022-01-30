#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  for(int i=1;i<=3;i++)
  {
    int a;
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  if(v[0]==5 && v[1]==5 && v[2]==7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
