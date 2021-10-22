#include <iostream>
using namespace std;
int calculate(int x, int y)
{
    if(x==y)
     return 0;
    else if(x<y)
      return 1+calculate(x+2,y);
    else
      return 1+calculate(x-1,y);
}
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<calculate(x,y)<<endl;
    }
    return 0;
}
