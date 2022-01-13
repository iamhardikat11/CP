#include <bits/stdc++.h>
using namespace std;
void readN(int n)
{
  string result = "";
  if(n%7==0)
  {
    for(int i=0;i<=n;i+=7)
      result+=read7();
  }
  else
  {
     for(int i=0;i<n;i+=7)
       result+=read7();
    result+=read7().substr(0,n%7-1);
  }
  cout << result << endl;
}
