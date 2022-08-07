#include <bits/stdc++.h>
using namespace std;
int main()
{
  int k;
  string a;
  cin >> k;
  cin >> a;
  string t = a.substr(0,k);
  if(a.size()<=k) 
  cout << a << endl;
  else 
    cout << t << "..." << endl;
  return 0;
}