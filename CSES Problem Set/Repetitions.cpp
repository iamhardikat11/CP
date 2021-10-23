//Link:-https://cses.fi/problemset/task/1069/
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int max=0;
  for(int i=0;i<s.length();i++)
  {
      int len=1;
      while(s[i]==s[i+1])
      {
          len++;
          i++;
      }
      if(len>max)
      {
        max=len; 
      }
  }
  cout<<max<<endl;
  return 0;
}
