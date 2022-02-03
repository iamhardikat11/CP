#include <bits/stdc++.h>
using namespace std;
bool check(string a,string b)
{
  map<char,int> u;
  map<char,int> v;
  for(int i=0;i<a.length();i++) u[a.at(i)]++;
  for(int i=0;i<b.length();j++) v[a.at(i)]++;
  return u==v;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string a,b;
  cin >> a >> b;
  cout << check(a,b) << endl;
  return 0;
}
