#include <iostream>
using namespace std;
int main()
{
  int tc;
  scanf("%d",&tc);
  while(tc--)
  {
    int N;
    scanf("%d",&N);
    if(N==0)
      cout << "invalid" <<endl;
    else
    {
       for(int i=1;i<=N;i++)
         cout << i << " ";
      cout << endl;
    }
  }
}
