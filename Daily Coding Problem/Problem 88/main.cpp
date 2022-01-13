/**
* Approach 1: You can implement repeated subtractions until first number becomes less than the second number.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll a,b;
  cin >> a >> b;
  int cnt = 0;
  while(a>=b)
  {
    a-=b;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
