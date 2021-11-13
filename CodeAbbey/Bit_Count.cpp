//Link:-https://www.codeabbey.com/index/task_view/bit-count
#include <iostream>
using namespace std;
void solve(int N)
{
    if(N>=0)
    {
        int count=0;
      while(N!=0)
      {
         int r = N%2;
         if(r==1)
          count++;
         N=N/2;
      }
      cout<<count<<endl;
    }
    else
    {
        
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        solve(N);
    }
}
