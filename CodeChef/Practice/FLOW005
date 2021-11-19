#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int N;
    cin >> N;
    int count = 0;
    count += N/100;
    N = N%100;
    while(N!=0) 
    {
      if(N>=50)
      { 
          count += 1;
          N = N%50;
      }
      else if(N>=10)
      { 
          count += N/10;
          N = N%10;
      }
      else if(N>=5)
      { 
          count += N/5;
          N = N%5;
      }
      else if(N>=2)
      { 
          count += N/2;
          N = N%2;
      }
      else
      {
           count += 1;
           N--;
      }
     }
    cout << count<<endl;
  }

}
