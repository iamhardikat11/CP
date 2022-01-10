#include <bits/stdc++.h>
using namespace std;
int ret()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int x,y,b;
  cin >> x >> y >> b;
  if(b&1)
    return x;
  else
    return y;
}
