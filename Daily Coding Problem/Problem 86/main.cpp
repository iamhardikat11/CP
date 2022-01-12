#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  std::string s;
  cin >> s;
  vector<int> v;
  // 1-'(' 0-')'
  //
  for(auto ch = s.begin(); ch < s.end() ; ch++)
  {
    if(ch=='(')
      v.push_back('(');
    if(ch==')')
    {
      if(v.size()!=0)
      {
        if(v[v.size()-1]=='(')
          v.pop();
        else
          v.push_back(')');
      }
      else
      {
        v.push_back(')');
      }
    }
  }
  cout << v.size() << endl;
  return 0;
}
