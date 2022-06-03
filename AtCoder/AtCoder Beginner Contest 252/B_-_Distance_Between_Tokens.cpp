#include <bits/stdc++.h>
using namespace std;
int main()
{
  int H,W;
  cin >> H >> W;
  vector<string> A(H);
  int a=-1,b=-1,c=-1,d=-1,f=0;
  for(int i=0;i<H;i++)
  {
    cin >> A[i];
    for(int j=0;j<W;j++)
    {
      if(A[i][j]=='o')
      {
        if(f!=1)
        {
          a=i;
          b=j;
          f=1;
        }
        else
        {
          c=i;
          d=j;
        }
      }
    }
  }
  cout << abs(a-c)+abs(b-d) << endl;
  return 0;
}